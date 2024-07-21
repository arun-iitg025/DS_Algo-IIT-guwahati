#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;


void printArray(int arr[], int size){

	for(int i=0; i<size; i++){

		cout << arr[i] << "\t";
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


int main(int argc, char* argv[]){


	srand(time(0));

	int n = atol(argv[1]);


	int arr[n];
	//cout<<"\nEnter the Array elements : ";
	
	
	for(int i = 0; i<n; i++){


		arr[i] = rand()%n;
	}

	//	cout << "\n Array elements are : ";
	//printArray(arr, n);

	clock_t start, end;
	start = clock();
	insertionSort(arr, n);
	end = clock();
	double time_taken = (double) (end - start)/CLOCKS_PER_SEC;
	cout<<endl;
	//cout<<"\nsorted Array"<<endl;
	//	printArray(arr, n);
	cout << endl << "total time taken : " << time_taken  << " sec" << endl;
	return 0;
}