/*
E

D       E

C       D       E

B       C       D       E

A       B       C       D       E
*/
#include<iostream>
using namespace std;

int main(){
	int n,row=1;
	cout<<"\nEnter the number : ";
	cin>>n;

	while(row<=n){

		int col=1;
		char ch='A'+(n-row);
		while(col<=row){
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