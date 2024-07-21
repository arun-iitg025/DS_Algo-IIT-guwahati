#include<iostream>
#include<stack>
using namespace std;

int main(){

	// creation stack

	stack<int> s;

	// push operation

	s.push(2);
	s.push(4);
	s.push(6);

	// pop operation

	s.pop();

	// printing elements

	cout << endl << " top element is : " << s.top() << endl;

	if(s.empty()){

		cout << endl << endl << "stack is empty: " << endl;

	}
	else{
		cout << endl << endl << " stack is non-empty: "<< endl;

	}

	cout << endl << endl << " size of stack is: "<< s.size()<<  endl;
	return 0;
}