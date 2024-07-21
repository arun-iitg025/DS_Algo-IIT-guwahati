#include<iostream>

using namespace std;
int main(){

	// 2d array

	int arr[3][3];


	cout<<"\nEnter the array element are: ";

// taking input in array
	for(int row =0;row<3;row++){
		for(int col = 0;col<3;col++){

			cin>>arr[row][col];
		}

	}
	cout<<"\nour 2d array : "<<endl;
	// taking output

	for(int row = 0; row<3; row++){

		for(int col = 0;col<3; col++){

			cout<<arr[row][col]<<"\t";

		}

		cout<<endl;
	}	

	cout<<"\nIn WAVE ordering : ";
	for(int col =0; col<3; col++){

		if(col&1){

			for(int row = 3-1; row>=0; row-- ){

				cout<<arr[row][col]<<"\t";
			}
		}
		else{

			for(int row = 0; row<3; row++){

				cout<<arr[row][col]<<"\t";
			}
			
		}
	}
}