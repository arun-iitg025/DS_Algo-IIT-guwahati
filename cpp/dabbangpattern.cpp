#include<iostream>
using namespace std;

int main(){
	int n, row=1;
	cout<<"\nEnter the number: ";
	cin>>n;

// print first triangle 
	while(row<=n){

		int col=1;
		int val=n-row+1;
		while(col<=val){
			cout<<col<<"\t";
			col++;
		}
// print second triangle
		int start=row-1;

		while(start){
			cout<<"*"<<"\t";
			start=start-1;
		}

		int start1=row-1;

		while(start1){
			cout<<"*"<<"\t";
			start1=start1-1;
		}
// print third triangle 
		int start2=row;
		while(start){
			
		}
		cout<<endl;
		cout<<endl;
		row++;
	}
	return 0;
}