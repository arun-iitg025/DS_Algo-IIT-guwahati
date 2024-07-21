#include<iostream>
#include<string.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;

	// Node constructor

	Node(int d){
		this->data = d;
		this->next = NULL;
	}
};
class hashTable{
	private:
	Node* arr[10] = {0};

	// insertion on hashTable

	void add_to_table(Node* node, int index){
		if(arr[index] == NULL){
			arr[index] = node;
			return;
		}
		else{
			Node* temp = arr[index];
		arr[index] = node;
		node->next = temp;
		}
	}

	void delete_from_table(int index, int data){
		if(arr[index] == NULL){
			cout <<"\nNo data found!!!"<<endl;	
			return;
		}

		Node* prev;
		Node* curr;

		prev = arr[index];

		if(prev->data == data){
			cout << "prev:"<<prev->data << endl;
			arr[index] = prev->next;
			free(prev);
		}
		prev = arr[index];
		curr = prev->next;
		
		while(curr){
			
			if(curr->data == data){
				
				Node* temp;
				temp = curr->next;
				free(curr);
				prev->next = temp;
				continue;
				cout << "\n Are you okay: "<<endl;
			}
			prev = prev->next;
			curr = curr->next;
		}
	}

	public:

	int getIndex(int v){
		return v%10;
	}

	void insert(int v){
		int index = getIndex(v);
		
		Node* node = new Node(v);
		node->data = v;

		add_to_table(node, index);
	}
	void delet(int data){
		int index = getIndex(data);

		delete_from_table(index, data);
	}
	void print(void){

		for(int i=0; i<10; i++){

			Node* temp = arr[i];
			cout << i <<" = ";
			while(temp){
				cout <<temp->data << "-->";
				temp = temp->next;
			}
			cout << endl;
		}
		
	}

};
int main(){

	hashTable hs;
	hs.insert(222123001);
    hs.insert(222123001);
    hs.insert(222123001);
    hs.insert(222123002);
    hs.insert(222123003);
    hs.insert(222123004);
    hs.insert(222123005);
    hs.insert(222123006);
    hs.insert(222123007);
    hs.insert(222123008);
    hs.insert(222123009);
    hs.insert(222123010);
    hs.insert(222123011);
    hs.insert(222123012);
    hs.insert(222123013);
    hs.insert(222123014);
    hs.insert(222123015);
    hs.insert(222123016);
    hs.insert(222123017);
    hs.insert(222123018);
    hs.insert(222123019);
	cout <<"\nprinting:" <<endl << endl;
	hs.print();

	cout <<"\nDelete a node:" << endl;

	hs.delet(222123008);
	hs.print();

	return 0;
}