#include<iostream>
using namespace std;
class node{

public:
	int data ;
	node *next;

	node(int data){

		this->data = data;
		this->next = NULL;

	}
	~node(){

		int value = this->data;

		while(this->next!=NULL){
			delete next;
			this->next = NULL;

		}
	}
};
void create(node* &tail, int data){

	node* newnode = new node(data);

	tail->next = newnode;

	tail = newnode;

}

void print(node* &head){

	node*temp = head;

	while(temp!=NULL){

		cout << temp->data << " --> ";
		temp=temp->next;

	}
	
}
void toDelete(int target_no, node* &head){

	node *target;
	node* newnode;


	// deleting first node
	node* search(node* , int);
	if(head->data == target_no){
		head = head->next;
	}
	else{
			// deleting the second node or target node
		
		target = search(head, target_no);
		if(target == NULL){
			cout <<"\nData not found !!! " << endl;

		}
		else{
				newnode = target->next->next;
				target->next=newnode;

		}
		
	}
}
node* search(node *temp, int target_no){
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

	node *start  = new node(data);

	node *head = start; 
	node *tail = start;

	int n,m;

	cout << "\nHow many number you want to Add: ";
	cin >> n;

	for(int i=0; i<n; i++){

		cout <<"\nEnter the data for the new node: ";
		cin >> m;
		create(tail, m);

	}

	print(head);

	char val;

	cout << "\nDo you want to delete a node(y/n):";
	cin >> val;

	if(val == 'y'){

		int data;

		cout << "\nEnter which node you want to delete : ";
		cin >> data;

		toDelete(data, head);
	}
	print(head);



	return 0;

}