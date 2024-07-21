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
void print(node* head){

	node*temp = head;

	while(temp!=NULL){

		cout << temp->data << " --> ";
		temp = temp->next;

	}
}
void reverse(node* &head){

	node*current= head;
	node *prev = NULL;
	node *forward;

	while(current!=NULL){

		forward = current->next;
		current->next = prev;
		prev = current;
		current  = forward;
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
	cout << "\nDo you Reverse a linkedlist(y/n):";
	cin >> val;
	if(val == 'y'){

		
		reverse(head);

	}
	// tail isliye pass kara rahe kyunki head->next NULL hai 
	
	print(tail);

	

	return 0;
}