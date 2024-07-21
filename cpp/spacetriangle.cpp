/*
                               *

                        *       *

                *       *       *

        *       *       *       *

*       *       *       *       *
*/
#include<iostream>
using namespace std;

int main()
{
	int n,row=1;

	cout<<"\nEnter the number: ";
	cin>>n;

	while(row<=n){

		// space print karlo
		int space = n-row;
		while(space)
		{
			cout<<"\t";
			space=space-1;
		}
		// stars print karlo
		int col=1;
		while(col<=row){
			cout<<"*"<<"\t";
			col++;


		}
		cout<<endl;
		cout<<endl;
		row++;
	}
	return 0;
}