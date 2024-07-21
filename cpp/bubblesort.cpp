#include<iostream>
using namespace std;


void printArray(int arr[], int size){

	for(int i=0; i<size; i++){

		cout<<arr[i]<<"\t";
	}
}
void bubbleSort(int arr[], int n){

	for(int i =1; i<n; i++){  	// jo round ko darshata hai 

		bool swapped = false;

		for(int j=0; j<n-i; j++){	// process till n-1 th index

			if(arr[j] > arr[j+1]){

				swap(arr[j], arr[j+1]);

				swapped = true;
			}
		}
		if(swapped == false){		// iss line ka matlab hai ki array already sorted hai

			break;
		}

	}
}

int main(){

	int arr[6];
	int size = 6;
	cout << "\nEnter the array element are : ";
	

	for(int i = 0; i<size; i++){


		cin>>arr[i];
	}

	cout << "Array element are : ";
	printArray(arr, size);

	bubbleSort(arr, size);
	cout<<endl;
	cout<<"\nsorted Array : ";
	printArray(arr, size);
}