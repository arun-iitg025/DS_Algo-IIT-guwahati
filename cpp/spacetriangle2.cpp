/*
*       *       *       *       *

        *       *       *       *

                *       *       *

                        *       *

                                *
*/
#include<iostream>
using namespace std;

int main(){
	int n,row=1;
	cout<<"\nEnter the number: ";
	cin>>n;

	while(row<=n)
	{
		int space=row-1;
		while(space){

			cout<<"\t";
			space=space-1;
		}
		int col=1;
		int val=n+1-row;
		while(col<=val){
			cout<<"*"<<"\t";
			col++;
		}
		cout<<endl;
		cout<<endl;
		row++;
	}
	return 0;
}