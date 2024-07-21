#include<iostream>
using namespace std;


void PrintArray(int arr[], int n){
	for(int i=0; i<n; i++){

		cout << arr[i] <<" ";
	}
}
int FindMax(int arr[], int n){
	int max = INT_MIN;
	for(int i=0; i<n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	
	return max;
}

void CountSort(int *arr, int n, int pos){

	//Create the count array dynamically
	int Count[n];

	// Count element initialize by zero
	for(int i =0; i<n; i++){
		Count[i] = 0;
	}
   
	
	for(int i=0; i<n; i++){

		// Count ke array mai increament kar diye
		++Count[(arr[i]/pos)%10];
	}

	for(int i=0; i<=pos; i++){
		Count[i] = Count[i]+Count[i-1];
	}

	int b[n];
	for(int i=0; i<n; i++){
		b[i] = 0;
	}

	for(int i=n-1; i>=0; i--){
		b[--Count[(arr[i]/pos)%10]] = arr[i];
	}

	for(int i=0; i<n; i++){
		arr[i] = b[i];
	}
	
}
void RadixSort(int arr[], int n){

	int m = FindMax(arr, n);
	for(int i=1; m/i > 0; i*10){
	
		CountSort(arr, n, i);
	}
}
int main()
{
	int arr[] = {12, 3, 5, 3, 2, 6, 7, 3};
	int n = 8;
	RadixSort(arr, n);
	cout << endl << "After Sorting: "<<endl <<endl;
	PrintArray(arr, n);
	return 0;
}