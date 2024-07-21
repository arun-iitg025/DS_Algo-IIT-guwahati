#include<iostream>
using namespace std;
void bubbleSort(int *arr, int n){

	//
	if(n == 0 || n==1){
		return ;

	}

	// 1 case ko dekho baaki recursion sambhal  lega

	for(int i =0; i<n-1; i++){

		if(arr[i] > arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
	}
	bubbleSort(arr, n-1);
}

int main(){

	int arr[5] = {2,5,7,3,9};

	int size = 5;
	bubbleSort(arr, 5);

	cout << "\nThe array element are ";

	for(int i=0; i<5; i++){

		cout << arr[i] << "\t";
	}

	return 0;
}