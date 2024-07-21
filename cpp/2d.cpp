#include<iostream>

using namespace std;
void arraySum(int arr[][3],int row, int col){

	
	for(int row = 0; row<3; row++){

		int sum = 0;
		for(int col = 0;col<3; col++){

			sum =sum + arr[row][col];


		}
		
		cout<<"\nSum of the row are: "<<sum<<endl;
		cout<<endl;
	}	
}

int rowSum(int arr[][3], int row, int col){

	int maxi = INT_MIN;
	int index = 0;
	for(int row = 0; row<3; row++){

		int sum = 0;
		for(int col = 0;col<3; col++){

			sum =sum + arr[row][col];


		}
		
		if(sum  > maxi){

			maxi = sum;

			index = row;
		}
	}
	cout<<"\nMaximunm row sum  : "<<maxi<<endl;

	return index;	
}

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

	arraySum(arr ,3, 3 );
	int index = rowSum(arr, 3, 3);

	cout<<"\nMaximum rowSum at index : "<<index;


	cout<<"\nIn WAVE ordering : ";
	for(int col =0; col<3; col++){

		if(col&1){

			for(int row = 3; row>0; row-- ){

				cout<<arr[row][col]<<"\t";
			}
		}
		else{

			for(int row = 0; row<3; row++){

				cout<<arr[row][col]<<"\t";
			}
			
		}
	}
return 0;

}