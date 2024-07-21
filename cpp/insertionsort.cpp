
#include<iostream>
using namespace std;

void printArray(int arr[], int size){

	for(int i=0; i<size; i++){

		cout<<arr[i]<<"\t";
	}
}
void insertionSort(int arr[], int n){		

	for(int i=1; i<n; i++){		// round ko darshata hai

		int temp = arr[i];
		int j=i-1;
		for(j=i-1; j>=0; j--){

			if(arr[j] > temp){

				// shift kardo
				arr[j+1] = arr[j];
			}
			else{	// ruk jaao

				break;
			}
		}

		arr[j+1] = temp;
	}
}

int main(){


	//int size;
	//cout<<"\nEnter the size of an array: ";
	//cin>>size;

	int arr[8];
	int size = 8;
	for(int i = 0; i<size; i++){


		cin>>arr[i];
	}
	printArray(arr, size);

	insertionSort(arr, size);
	cout<<endl;
	cout<<"\nsorted Array = ";
	printArray(arr, size);
}