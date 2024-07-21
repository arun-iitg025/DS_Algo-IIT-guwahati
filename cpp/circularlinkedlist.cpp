#include<iostream>

using namespace std;

class Node{

public:

	int data;
	Node *next;



	Node(int data){

		this->data = data;
		this->next = NULL;


	}
};

 // create a linked list

void create(Node* &tail, int data){

	Node* temp = new Node(data);

	tail->next = temp;

	tail = temp;


}

//  printing the linkrdlist

void print(Node* &head){


	Node* temp = head;

	while(temp!=NULL){

	cout<< temp->data << "--> ";

	temp = temp->next;

	}
}


void circular(Node * &head){

	Node *temp = head;

	while(temp->next!=NULL){

		temp = temp->next;
	}
	temp->next = head;
}
void printcircular(Node* &head){

	Node * temp = head;

	while(temp->next !=head){

		cout << temp->data << "--> ";
		temp= temp->next;
	}
	cout << temp->data << "--> ";

	cout << head->data << "--> ";

}

int main(){

		int m;
		cout <<"\nEnter the data for the first node : ";

		cin>>m;

		Node* node1 = new Node(m);

		Node* head  = node1;

		Node* tail = node1;

		//create(tail, 12);
		//create(tail, 22);
		int n , num;
		cout << "\nHow many number of node you want to create: ";
		cin >> num; 

		for(int i=0; i<num; i++){
			cout <<"\nEnter the data for the new node: ";
			cin >> n;

			create(tail, n);

		}

		char val;

		cout << "\nDo you want to create a circular linkedlist(y/n) : ";
		cin>>val;

		if(val == 'y'){

			circular(head);

		}

		printcircular(head);

		return 0;

}