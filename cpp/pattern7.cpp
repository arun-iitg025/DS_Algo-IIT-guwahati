/*
A       B       C       D       E       F

B       C       D       E       F       G

C       D       E       F       G       H

D       E       F       G       H       I

E       F       G       H       I       J

F       G       H       I       J       K*/


#include<iostream>
using namespace std;

int main(){
	int n,row=1;

	cout<<"\nEnter the number: ";
	cin>>n;

	while(row<=n){

		int col=1;
		char ch ='A'+row-1;
		while(col<=n){
			cout<<ch<<"\t";
			col++;
			ch++;

		}
		cout<<endl;
		cout<<endl;
		row++;
	}
	return 0;
}