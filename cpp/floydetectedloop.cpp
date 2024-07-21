#include<iostream>
#include<map>
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
Node* floyDetectedLoop(Node* head){


	if(head == NULL){

		return NULL;
	}

	Node* fast = head;
	Node* slow = head;

	while(slow != NULL && fast != NULL){

		fast = fast->next;
		if(fast != NULL){
			fast = fast->next;

		}

		slow = slow->next;

		if(slow == fast){

			return slow;
		}
	}

	return NULL;

}

// location to find the node which is starting loop

Node* getStartingLoop(Node* head){

	Node* intersection = floyDetectedLoop(head);
	Node* slow = head; 

	while( slow != intersection){
		slow = slow->next;
		intersection = intersection->next;
	}
	return slow;
}

void removeloop(Node* head){

	if(head == NULL){
		return ;
	}

	Node* startingNode = getStartingLoop(head);

	Node* temp = startingNode;

	while(temp->next != startingNode){
		temp = temp->next;
	}

	temp->next = NULL;
}

int main(){

		int m;
		cout <<"\nEnter the data for the first node : ";

		cin>>m;

		Node* start = new Node(m);

		Node* head  = start;

		Node* tail = start;

		
		int n , num;
		cout << "\nHow many number of node you want to create: ";
		cin >> num; 

		for(int i=0; i<num; i++){
			cout <<"\nEnter the data for the new node: ";
			cin >> n;

			create(tail, n);

		}
		print(start);

		tail->next = head->next->next;
		cout << endl << " head: " << head->data << " \t" << "tail : " << tail->data << endl;
 
		// detecting loop 

		if(floyDetectedLoop(head) != NULL){

			cout << "\n Circular loop PRESENT in  the linked list: " << endl;

		}
		else{
			cout << "\n Circular loop NOT PRESENT in  the linked list: " << endl;
		}

		Node* loop = getStartingLoop(head);

		cout << "\nLOOP started At  : "<< loop->data << endl;
		
		removeloop(start);
		print(start);

		return 0;

}