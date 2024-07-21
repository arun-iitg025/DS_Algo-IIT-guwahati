#include<iostream>
using namespace std;

int main(){

	int a,b;

	cout<<"\nEnter the value of a: "<<endl;
	cin>>a;

	cout<<"\nEnter the value of b: "<<endl;
	cin>>b;

	char op;
	cout<<"\nEnter a operation you want to perform: "<<endl;
	cin>>op;

	switch( op ){

		case '+': cout<< (a+b) <<endl;
				break;

		case '-': cout<< (a-b)<< endl;
				break;

		case '*': cout<< (a*b) << endl;
				break;

		case '/': cout<< (a/b)<< endl;
				break;

		case '%': cout<< (a%b)<< endl;
				break;

		default : cout<<"\nEnter the valid operation: "<<endl;

	}
	return 0;
}