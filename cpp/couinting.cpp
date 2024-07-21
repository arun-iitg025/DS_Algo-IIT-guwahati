// Time complexity = O(n+m) , where n = size of array and m = size of Count Array
// Space Complexity = O(m)
// this is not good Sort beacause  cost of EXTRA SPACE

#include<iostream>
using namespace std;
void PrintArray(int arr[], int n){
	for(int i=0; i<n; i++){

		cout << arr[i] <<"\t";
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

void CountSort(int *arr, int n){
	int i, j;

	//find the Maximum element in array
	int Max = FindMax(arr, n);

	//Create the count array dynamically
	int *Count = new int[Max+1];

	// Count element initialize by zero
	for(i =0; i<Max+1; i++){
		Count[i] = 0;
	}

	for(i=0; i<n; i++){

		// Count ke array mai increament kar diye
		Count[arr[i]] = Count[arr[i]] + 1;
	}

	i=0;// counter for Counter Array
	j=0;// counter for Given Array

	while( i<Max+1 ){

		if(Count[i]>0){
			arr[j] = i;
			Count[i] = Count[i] - 1;
			j++;
		}
		else{
			i++;
		}
	}
}

int main()
{
	int arr[] = {12, 3, 5, 3, 2, 6, 7, 3};
	int n = 8;
	CountSort(arr, n);
	cout << endl << "After Sorting: "<<endl <<endl;
	PrintArray(arr, n);
	return 0;
}