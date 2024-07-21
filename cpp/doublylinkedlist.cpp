#include<iostream>

using namespace std;

class node{

public:
	int data;
	node * prev;
	node * next;


	node(int data){

		this->data = data;

		this->next = NULL;

	}
};

// printing the linkedlist

void print(node *head){

	node *temp = head;

	while(temp!=NULL){
		cout << temp->data << " --> ";
		temp = temp->next;
	}
}
int getLength(node* &head){

	int count = 0;
	node *temp = head;

	while(temp!=NULL){
		count++;
		temp = temp->next;

	}
	return count;
}
void insertAthead(node* &head, int data){

	node*temp = new node(data);
	temp->next = head;
	head->prev = temp;
	head = temp;
}

int main(){

	int data;
	cout << "\nEnter the data for the fisrt node: ";
	cin >>data;

	node *start = new node(data);

	node *head = start;

	int n,m;

	cout << "\nHow many number of node you want to Add: ";
	cin >> n;

	for(int i=0; i<n; i++){

		cout << "\nEnter the data for the new node: ";
		cin >> m;
		insertAthead(head, m);
	}
	cout << endl << endl;
	cout<< "Doublylinkedlist : ";
	print(head);
	cout << endl;
	cout << endl;
	
	int length = getLength(head);

	cout << "\nLength: "<< length << endl << endl;


	return 0;
}
