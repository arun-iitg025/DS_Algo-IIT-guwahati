/*
A       A       A       A       A

B       B       B       B       B

C       C       C       C       C

D       D       D       D       D

E       E       E       E       E*/
#include<iostream>

using namespace std;

int main(){
	int n,row=1;
	cout<<"\nEnter the number: ";
	cin>>n;

	while(row<=n){

		int col=1;
		char  ch = 'A'+row-1;
		while(col<=n){

			cout<<ch<<"\t";
			col++;

		}
		cout<<endl;
		cout<<endl;

		row++;
	}
	return 0;
}