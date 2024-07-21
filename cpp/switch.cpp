#include<iostream>

using namespace std;

int main(){

	int num;
	cout<<" \nEnter the number: ";
	cin>>num;
	cout<<endl;
	cout<<endl;


	switch(num){


		case 1: cout<< "first "<<endl;
				break;

		case 2: cout<< "second "<<endl;
				break;

		default : cout<< "It is default case "<<endl;


		return 0;

	}
}