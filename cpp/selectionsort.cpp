#include<iostream>
using namespace std;


void printArray(int arr[], int size){

	for(int i=0; i<size; i++){

		cout << arr[i] << "\t";
	}
}

void sortArray(int arr[], int size){
	
for(int i=0; i<size-1; i++){


		int minIndex = i;

		for(int j=i+1; j<size; j++){

			if(arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
			swap(arr[minIndex], arr[i]);
			
	}
}



int main(){


	int arr[7];
	int size = 7;
	cout<<"\nEnter the Array elements : ";
	
	
	for(int i = 0; i<size; i++){


		cin >> arr[i];
	}
	cout << "\n Array elements are : ";
	printArray(arr, size);
	sortArray(arr, size);
	cout<<endl;
	cout<<"\nsorted Array"<<endl;
	printArray(arr, size);
	return 0;
}