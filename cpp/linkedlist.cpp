#include<iostream>
using namespace std;


class Node{

public:
	int data;
	Node* next;

	// constructer

	Node(int data){

		this->data = data;
		this->next = NULL;

	}

};
void insertAthead(Node * &head, int data){

	Node * newnode = new Node(data);

	newnode->next = head;

	head = newnode;

}

void insertAtTail(Node* &tail, int data){

		// new node create
	Node * temp = new Node(data);

	tail->next = temp;

	tail = temp;


}

void insertAtpPosition(Node* &tail, Node* &head, int position, int data){

	if(position == 1){
		insertAthead(head, data);
		return;
	}

	Node * temp  = head;
	int count =  1;

	while(count < position-1){

		temp = temp->next;
		count++;
	}

	// inserting  At the last position

	if(temp->next == NULL){

		insertAtTail(tail, data);
		return;
	}

	Node* newnode = new Node(data);

	

	newnode->next  = temp->next;

	temp-> next = newnode;




}

void print(Node* &head){


	Node *temp = head;

	cout << endl ;

	while(temp!=NULL){

		cout << temp->data << " ---> " ;
		temp = temp->next;

	}


	cout << endl;

}


int main(){

	// create a new node
	int a;
	cout << "\nEnter the data for the furst node: ";
	cin >> a;

	Node* node1 = new Node(a);


	// tail point to node 1

	Node* tail = node1;

	// head point to node1

	Node *head = node1;

//	print(head);

// take input from user

	int n,m;
	cout << "\nHow many node you want to Add: ";
	cin >>n;
	for(int i =0; i<n; i++){

		cout << "\nEnter the data for the new node: ";
		cin >>m;
		insertAtTail(tail, m);
	}

	print(head);

	char val;

	cout <<"\nDo you want insert a newnode(y/n): ";
	cin >> val;

	if(val == 'y'){

		int n, data;

		cout << "\nEnter the position you want to insert a node: ";
		cin >> n;
		cout << "\nEnter the data : ";
		cin >> data;
		insertAtpPosition(tail, head, n, data);
	}

	cout << endl;

	print(head);

	cout << "\n head data: " << head->data << endl;
	cout << "\ntail  data: " << tail->data << endl;

 return 0;

}