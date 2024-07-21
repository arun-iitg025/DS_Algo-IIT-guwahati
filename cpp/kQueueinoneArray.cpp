#include<iostream>

using namespace std;

class kQueue{

public:
	int n;
	int k;
	int *front;
	int *rear;
	int *arr;
	int freeSpot;
	int *next;

public:
	kQueue(int n , int k){
		this -> n = n;
		this -> k = k;
		front = new int[k];			// k size ka array bana liye 

		rear = new int[k];			// k size ka array bana liye
		
		for(int i = 0; i<k; i++){
			front[i] = -1;
			rear[i] = -1;
		}

		next = new int[n];			// k size ka array bana liye
		
		for(int i = 0; i<n; i++){
			next[i] = i+1;
		}

		next[n-1] = -1;
		arr = new int[n];			// k size ka array bana liye
		freeSpot = 0;
	}

	void enqueue(int data, int qn){		// enqueue mean push

		// check overflow condition
		if(freeSpot == -1){
			cout <<"\n No empty space is present: "<< endl;
			return;
		}

		// find first free index

		int index = freeSpot;

		// update freeSpot

		freeSpot = next[index];

		// check wheather first element
		if(front[qn-1] == -1){			// kyunki abhi 0 par indexing hai isiliye [qn-1] likhe hai
			front[qn-1] = index;			
		} 
		else{
			// linked new element to the prev element 
			next[rear[qn-1]] = index;
		}

		// update next
		next[index] = -1;

		// update rear
		rear[qn-1] = index;

		// push element
		arr[index] = data;		
	}

	// pop function

	int  dequeue(int qn){		// dequeue  == pop

		// check underflow
		if(front[qn-1] == -1){
			cout <<"\n Queue underflow " << endl;
			return -1;	
		}

		// find index to pop
		int index = front[qn-1];

		// front ko aage badhao
		front[qn-1] = next[index];

		// freeslot ko manage karo
		next[index] = freeSpot;
		freeSpot = index;
		return arr[index];
	}

};

int main(){

	kQueue q(10, 3);

	q.enqueue(10, 1);
	q.enqueue(15, 1);
	q.enqueue(20, 2);
	q.enqueue(25, 1);

	cout << q.dequeue(1) << endl;
	cout << q.dequeue(2) << endl;
	cout << q.dequeue(2) << endl;
	cout << q.dequeue(1) << endl;
	cout << q.dequeue(1) << endl;
	return 0;
}