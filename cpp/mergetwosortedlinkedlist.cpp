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
void print(node* &head){

	node*temp = head;

	while(temp!=NULL){

		cout << temp->data << " --> ";
		temp = temp->next;

	}
}
node * merge(node * first,node * second){
   if(first==NULL)
       return second;

   if(second==NULL)
       return first;

   node * ans=new node(-1);
   node *temp=ans;
   node * ptr1=first;
   node * ptr2=second;

   while(ptr1!=NULL && ptr2!=NULL){

       if(ptr1->data < ptr2->data){
           temp->next=ptr1;
           temp=temp->next;
           ptr1=ptr1->next;
       }
       else{
           temp->next=ptr2;
           temp=temp->next;
           ptr2=ptr2->next;
       }
   }

   while(ptr1!=NULL){
           temp->next=ptr1;
           temp=temp->next;
           ptr1=ptr1->next;
   }

   while(ptr2!=NULL){
           temp->next=ptr2;
           temp=temp->next;
           ptr2=ptr2->next;
   }

   return ans->next;
}

int main(){

	int data;

	cout << "\nEnter the data for the first node: ";
	cin >> data;

	node* first = new node(data);

	node* head = first;
	node* tail = first;

	int n,m;
	cout << "\nHow many node you want to add: ";
	cin >> n;

	for(int i=0; i<n; i++){
		cout << "\nEnter the data for the new node: ";
		cin >> m;
		
		create(tail, m);

	}
	

	// create a second linkedlist

	int  data1;

	cout << "\nEnter the data for the first node: ";
	cin >> data;

	node* second = new node(data);

	node* head1 = second;
	node* tail1 = second;

	int n1,m1;
	cout << "\nHow many node you want to add: ";
	cin >> n;

	for(int i=0; i<n; i++){
		cout << "\nEnter the data for the new node: ";
		cin >> m;

		create(tail1, m);

	}
	cout << endl << endl << "The FIRST linkedlist is : ";

	print(head);

	cout << endl << endl << "The SECOND linkedlist is : ";
	print(head1);

	node* answer = merge(first, second);

	cout << endl << endl << "The MERGE linkedlist is : ";

	print(answer);

	return 0;
}