#include<iostream>
using namespace std;
class node{

public:
	int data;
	node* next;
	node* prev;

	node(int data){

		this->data = data;
		this->next = NULL;
		this->prev = NULL;

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
	newnode->prev = tail;

	tail = newnode;


}
void print(node* head){

	node* temp = head;

	while(temp!=NULL){
		cout << temp->data <<" --> ";
		temp = temp->next;
	}
}
void deletenode(node* &head, int target_no){


	node* target;

	// create a arbitray node 

	node* newtemp = new node(10);
	newtemp->next = NULL;
	newtemp->prev = NULL;
	node *search(node*, int );
	if(head->data == target_no){
		
	
		newtemp->next = head->next;
		newtemp->prev = head;
		free(head);
		head = newtemp->next;
	
	}
	else{
		target = search(head, target_no);
		if(target == NULL){
			cout << "\nData not found!!!!" << endl;

		}
		else if(target->next->next == NULL){
			target->next = NULL;
		}
		else{

			newtemp->next = target->next->next;
			newtemp->next->prev = target;
			target->next = newtemp->next;

		}
		

	}
	
	
}
node *search(node *temp, int target_no){
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
	cout <<"\nEnter the data for the first node: ";
	cin >> data;

	node* start = new node(data);

	start->next = NULL;
	start->prev = NULL;

	node *head = start;
	node* tail = start;

	int n,m;

	cout <<"\nHow many no of node you want to add:";
	cin >>n;

	for(int i=0;i<n;i++){
		cout <<"\nEnter the data for the newnode: ";
		cin >>m;
		create(tail, m); 
	} 
	print(start);
	cout <<endl<< head->data << " " << tail->data<<endl;
	

	char val;
	cout << "\nDo you want to Delete a node(y/n): ";
	cin >> val;

	if(val == 'y'){
		int number;
		cout <<"\nEnter which node you want to delete: ";
		cin >> number;
		deletenode(head, number);
	}
	print(head);
	return 0;
}