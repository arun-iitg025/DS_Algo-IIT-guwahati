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
};
void create(node* &tail, int data){
	node *newnode = new node(data);

	tail->next = newnode;
	tail = newnode;

}
void print(node* &head){

	node*temp = head;

	while(temp!=NULL){
		cout << temp->data <<" --> ";
		temp = temp->next;
	}
}
void circular(node* start){
	node *temp = start;

	while(temp->next != NULL){

		temp = temp->next;
	}
	temp->next = start;
}
void printcircular(node* start){
	node*temp = start;
	while((temp->next)!=start){
		cout << temp->data << " --> ";
		temp = temp->next;

	}
	cout << temp->data << " --> ";
	cout << start->data << " --> ";
}
int main(){

	int data;
	cout << "\nEnter the data for the first node: ";
	cin >> data;

	node *start = new node(data);
	node *tail = start;
	node *head = start;


	int n, m;

	cout <<"\nHow many no of node you want to Add: ";
	cin >> n;

	for(int i=0;i<n;i++){

		cout<< "\nEnter the data for the new node: ";
		cin >> m;
		create(head, m);
	} 
	print(start);

	char val;
	cout <<"\nDo you want to create a circular linkedlist(y/n): ";
	cin >> val;
	if(val == 'y'){

		circular(start);
	}
	printcircular(start);

	return 0;

}