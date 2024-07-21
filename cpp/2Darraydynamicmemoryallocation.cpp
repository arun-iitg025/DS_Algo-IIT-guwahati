#include<iostream>
using namespace std;
int main(){

	int row,col;
	
	cout << "\nEnter the Row of the 2D array : ";
	cin >> row;


	cout << "\nEnter the Column  of the 2D array : ";
	cin >> col;
	

	int** arr = new int *[row];
	

	for(int i=0; i<row; i++){

		arr[i]=new int[col];		// jab row banega tab value sab colom ke roop mai 
									//hi store hoaga
	}

	cout<<"\nEnter the array elements : ";

	// taking inputs 
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){

			cin >> arr[i][j];
		}
	}

	// taking output

	cout <<"\nOur 2D array is: "<< endl << endl;

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){

			cout << arr[i][j]<<"\t";

		}
		cout << endl << endl;
	}

	// releasing memory 

	for(int i=0; i<row; i++){

		delete [] arr[i];

	}

	delete []arr;

	return 0;
}