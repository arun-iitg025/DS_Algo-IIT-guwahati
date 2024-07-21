
#include<iostream>
using namespace std;


void selectionSort(int *arr, int n){

	
	if(n==0 || n==1)
	 return;

		int i=0;
		int minIndex = i;

	 	for(int j=i+1; j<n; j++){
	 		if(arr[j] < arr[minIndex]){

	 			minIndex=j;
	 		}
	 			
	 	}
	 	swap(arr[minIndex], arr[i]);
		selectionSort(arr+1, n-1);
}

int main(){

	int arr[6] = {23,34,13,28,12,22};
	int size = 6;

	selectionSort(arr, size);

	// print array elements 
	for(int i=0; i<size; i++){

		cout << arr[i] << "\t";
	}
	return 0;
}