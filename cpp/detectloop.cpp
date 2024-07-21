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
bool detectLoop(Node* head){


	if(head == NULL){

		return false;
	}

	map<Node*, bool> visited;

	Node* temp = head;

	while(temp!=NULL){

		//cycle present int the linkedlist

		if(visited[temp] == true){

			cout << endl << "\nPresent on  element : " << temp->data << endl;

			return true;

		}
		visited[temp] = true;
		temp = temp->next;

	}

	return false;

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

		// detecting loop 

		if(detectLoop(head)){

			cout << "\n Circular loop PRESENT in  the linked list: " << endl;

		}
		else{
			cout << "\n Circular loop NOT PRESENT in  the linked list: " << endl;
		}

		

		return 0;

}