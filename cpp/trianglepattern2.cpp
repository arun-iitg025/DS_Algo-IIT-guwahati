#include<iostream>
using namespace std;

int main()
{
	int n,row=1;
	cout<<"\nEnter the number: ";
	cin>>n;

	while(row<=n){

		int col=1,value=row;
		while(col<=row){

			cout<<value<<"\t";
			col=col+1;
			value++;

		}
		cout<<endl;
		cout<<endl;
		row++;

	}
	return 0;
}