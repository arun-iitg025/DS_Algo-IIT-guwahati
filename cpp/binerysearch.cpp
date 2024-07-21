#include<iostream>
using namespace std;
int binerySearch(int arr[], int size, int key){

	int start = 0;
	int end = size-1;

	int mid = start + (end - start)/2;

	while(start <= end){


		if(arr[mid] == key){


			return mid;
		}


		// got to right part
		if(key > arr[mid]){

			start = mid+1;

		}

		//go to left part
		if(key < arr[mid]){

			end = mid-1;
		}

		mid = start + (end - start)/2;


	}
	return -1;
}

int main(){

	int arr[6]={2,4,6,8,12,34};
	int brr[5]={4,5,7,9,13};

	int index1 = binerySearch(arr, 6, 34);
	cout<<endl;
	cout<<" index of 34 is : "<< index1<<  endl;
	int index2 = binerySearch(brr, 5, 13);
	cout<<endl;
	cout<<" indext of 13 is: "<< index2<< endl;


	return 0;
}