#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[] , int n, int arr2[], int m, int arr3[]){


	int i = 0; 
	int j = 0;
	int k=0;
	while(i<n && j<m ){

		if(arr1[i] < arr2[j]){

			arr3[k] = arr1[i];
			k++;
			i++;
		}
		else{

			arr3[k] = arr2[j];
			k++;
			j++;
		}
	}
	while( i < n){

		arr3[k] = arr1[i];
		k++;
		i++;
	}
	while(j < m){

		arr3[k] = arr2[j];
		k++;
		j++;
	}
}
void printArray(int arr[], int size){

	for(int i=0; i<size; i++){

		cout<<arr[i]<<"\t";
	}

}

int main()
{

	int arr1[5]={2, 3, 5, 6, 9};

	int arr2[3]={4, 7, 11};

	int arr3[8]={0};

	merge( arr1, 5, arr2, 3, arr3);
	cout<<endl;
	cout<<"\nThe merge Array : ";
	printArray(arr3 , 8);
	cout<<endl;
}