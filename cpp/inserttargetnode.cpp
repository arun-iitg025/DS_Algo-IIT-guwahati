#include<iostream>
using namespace std;
class node{
public:
	int data;
	node *next;


	//create node
	node(int data){

		this->data = data;
		this->next = NULL;

	}
};
void create(node* &tail, int data){

	node*newnode = new node(data);
	tail->next = newnode;
	tail = newnode;


}
void print(node* &head){

	node*temp = head;

	while(temp!=NULL){

		cout << temp->data << " --> ";
		temp = temp->next;

	}
}
void insert(node* &head, int target_no){
	node* target;

	int data;

	cout << "\nEnter the data for the insert newnode: ";
	cin >> data;

	node* newnode = new node(data);
	newnode->next = NULL;

	node* newtemp;

	node* search(node* , int);
	if(head->data == target_no){
		newnode->next = head;
		head = newnode;
	}
	else{
		target = search(head, target_no);

			if(target == NULL){
				cout << "\nData not found!!!" << endl;

			}
			else{
				newnode->next = target->next;
				target->next = newnode;
			}
		}
	
}
node *search(node*temp, int target_no){
	while(1){
		if(temp->next->data == target_no){
			return temp;

		}
		else if(temp->next->next == NULL){
			return NULL;

		}
		else{

			temp = temp->next;
		}
	}
}
int main(){

	int data;

	cout << "\nEnter the data for the first node: ";
	cin >> data;

	node* start = new node(data);

	node* head = start;
	node* tail = start;

	int n,m;
	cout << "\nHow many node you want to add: ";
	cin >> n;

	for(int i=0; i<n; i++){
		cout << "\nEnter the data for the new node: ";
		cin >> m;
		create(tail, m);

	}
	print(head);

	char val;
	cout << "\nDo you insert a new node(y/n):";
	cin >> val;
	if(val == 'y'){

		int number;
		cout << "\nWhich node before you want to insert: ";
		cin >> number;
		insert(head, number);

	}
	print(head);

	

	return 0;
}