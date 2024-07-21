#include<iostream>
using namespace std;


class Stack{
	// properties

public:
	int* arr;
	int top;
	int size;

	// behaviour
	Stack(int size){
		this->size = size;
		arr = new int[size];	// yahan par array create ho raha hai 
		top = -1;

	}

	void push(int element){

		// agar jagah hai to element ko daal do

		if(size-top > 1){
			top++;
			arr[top] = element;
		}
		else
		{
			// agar jagah nahi hai to bol do overflow ho jayega

			cout << "stack is overflow: " << endl;

		}
	}
	void pop(){

		// agar element hai to nikaal do 
		if(top >= 0){
			top--;
		}
		else{
			cout << endl << "Stack is underflow : " << endl;
			
		}

	}

	int peak(){
		if(top >= 0){
			return arr[top];
		}
		else{
			cout << "Stack is empty: " << endl;
			return -1;
		}
	}

	bool isEmpty(){
		if(top == -1){
			return true;
		}
		else{
			return false;
		}
	}
};
int main(){

	Stack st(5);

	st.push(22);
	st.push(19);
	st.push(33);
	st.push(44);

	cout << endl << "stack peak: " << st.peak() << endl;

	st.pop();

	cout << endl << "stack peak: " << st.peak() << endl;

	st.pop();

	cout << endl << "stack peak: " << st.peak() << endl;

	cout << endl << "stack peak: " << st.isEmpty() << endl;
	return 0;
}	