#include<iostream>
using namespace std;

void  print(int n){

	//base condition
	if(n == 0){

		return ;
	}

	// tail recursion

/*	cout << n << "\t";

	print(n-1);

	cout << endl << endl;	*/


	// Head recursion
	print(n-1);

	cout << n << "\t";
}

int main(){

	int n;

	cout << "\nEnter the number: ";

	cin >> n;

	print(n);

	return 0;
}