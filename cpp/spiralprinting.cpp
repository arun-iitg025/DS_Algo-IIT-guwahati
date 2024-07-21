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

	cout<<"\nSpiral Printing : ";

	int startingRow = 0;
	int startingCol = 0;
	int endingRow = 2;
	int endingCol = 2;

	int count = 0;
	int total = 3*3;

	while(count < total){

		// printing starting row

		for(int index = startingCol; index<=endingCol;index++){

			cout<<arr[startingRow][index]<<"\t";
			count++;
		}

		startingRow++;

		//printing endingCol 
		for(int index = startingRow; index<=endingRow;index++){

			cout<<arr[index][endingCol]<<"\t";
			count++;
		}
		endingCol--;

		//printing endingRow

		for(int index = endingCol;index>=startingCol;index--){

			cout<<arr[endingRow][index]<<"\t";
			count++;
		}
		endingRow--;

		// printing startingCol
		for(int index = endingRow; index>=startingRow; index--){

			cout<<arr[index][startingCol]<<"\t";
			count++;
		}
		startingCol++;
	}

}