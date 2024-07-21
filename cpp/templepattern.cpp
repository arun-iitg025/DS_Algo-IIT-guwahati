/*

                       1

                1       2       1

        1       2       3       2       1

1       2       3       4       3       2       1
*/
#include<iostream>
using namespace std;

int main(){
	int n,row=1;
	cout<<"\nEnter the number: ";
	cin>>n;
	while(row<=n){

		//space print karlo 
		int space=n-row;
		while(space){
			cout<<"\t";
			space=space-1;
		}

		// print first triangle
		int col=1;
		while(col<=row){

			cout<< col <<"\t";
			col++;

		}
		//print second triangle 
		int start = row-1;
		while(start){
			cout<<start<<"\t";
			start--;
		
		}
		cout<<endl;
		cout<<endl;
		row++;
	}

	return 0;
}