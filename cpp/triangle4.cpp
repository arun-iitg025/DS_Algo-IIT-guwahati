/*
A

A       B

A       B       C

A       B       C       D

A       B       C       D       E
*/
#include<iostream>
using namespace std;

int main()
{
	int n, row=1;
	cout<<"\nEnter the number: ";
	cin>>n;

	while(row<=n){

		int col=1;
		char ch='A';
	
		while(col<=row){
			//char ch= 'A';
			cout<<ch<<"\t";
			ch++;
			col++;
		}
		cout<<endl;
		cout<<endl;
		row++;

	}
	return 0;
}