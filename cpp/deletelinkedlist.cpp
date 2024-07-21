#include<iostream>
#include<map>

using namespace std;

class node{

public:
	int data;
	node* next;

	// constructor

	node(int data){
		this->data = data;
		this->next = NULL;

	}

	// destructor
	~node(){
		int value = this->data;

		// memory free

		if(this->next!=NULL){
			delete next;

			this->next = NULL;

		}
	
};

void create(node* &tail, int data){

	node *temp = new node(data);

	tail->next = temp;

	tail = temp;
}

void print(node* &head){

	node *temp = head;

	while(temp!=NULL){

		cout << temp->data << " -- > ";
		temp = temp->next;
	}
}
void deletenode(int position, node* &head){

 	// delete first node 
 	if(position == 1){

 		node* temp = head;
 		head = head->next;


 		// memory free first node

 		
 	} 
 	else{

 	node *temp = head;

 	int count = 1;


 	while(count < position-1){

 		count++;
 		temp = temp->next;

 	}

 	node* newnode;

 	newnode= temp->next->next;
 	free(temp->next);
 	temp->next = newnode;
 	}

}

int main(){

	int data;
	cout << "\nEnter the data for the first node: ";
	cin >> data;

	node *start = new node(data);

	node *head = start;
	node *tail = start;

	int n,m;

	cout << "\nhow many number of node you want to add: ";
	cin >> n;

	for(int i=0; i<n;i++){

		cout << "\nEnter the data for the new node : ";
		cin >>m;
		create(tail, m);
	}

	print(head);

	

	char val;
	cout << "\nDo you want to delete a node(y/n): ";
	cin >> val;

	if(val == 'y'){

		int number;

		cout << "\nEnter the position you want to delete : ";
		cin >> number;

		deletenode(number, head);

	}
	
	print(head);

	return 0;
}