#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){

	int mid = s+(e-s)/2;


	int len1= mid -s+1;
	int len2= e-mid;
	// do array banana hoga 

	int *first = new int[len1];		// yahan pe Array create kar liye len1 size ka 
	int *second = new int[len2];	// yahan pe Array create kar liye len1 size ka 

	//first array mai copy  array element ko 

	int mainIndex = s;		// yahan index 0  se start karenge aur ye main array ka index hai

	for(int i =0; i<len1; i++){
			first[i] = arr[mainIndex++];

	}
	//for(int i=0; i<len1; i++){
	//	cout << first[i] << "\t";
//	}

	// second array main copy karna hai array element ko
	 mainIndex = mid+1;				// yahan Mid minindex ke baad se count kar rahe 

	for(int i = 0; i<len2; i++){
		second[i] = arr[mainIndex++];
	}

	// merge two Array
	
	int index1 = 0;
	int index2 = 0;

	mainIndex = s;

	while(index1 < len1 && index2 < len2){

		if(first[index1] < second[index2])
		{
			arr[mainIndex++] = first[index1++];
		}
		else{
			arr[mainIndex++] = second[index2++];
		}
	}

	// jab first array main element jyada ho tab

	while(index1 < len1){

		arr[mainIndex++] = first[index1++];
	}

	// jab second array main element jyada ho

	while(index2 < len2){

		arr[mainIndex++] = second[index2++];
	}
		delete []first;
		delete []second;
}
void mergeSort(int *arr, int s, int e){

	//base case
	if(s >= e)
		return ;

	int mid = s+(e-s)/2;

	//  left part ko merge kardo

	mergeSort(arr, s, mid);
	//	print(arr, s+mid);
	// Right part ko merge kardo
	mergeSort(arr, mid+1, e);

	// dono array ko merge kar do

	merge(arr, s, e);
}

int main(){


	int arr[13] = {3,6,8,4,9,3,7,2,9,8,5,7,10};
	int n=13;

	mergeSort(arr, 0, n-1);

	// print karna hai
	for(int i=0; i<n; i++){

		cout << arr[i] <<"\t";
	}
	return 0;
}