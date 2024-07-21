#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int partition(int arr[], int s, int e){

	int pivot = arr[s];
	int count= 0;

	// element count karna hai
	for(int i=s+1; i<=e; i++){

		if(arr[i] <= pivot){
			count++;
		}
	}

	//pivot ko right place par pahunchana hai

	int pivotIndex = s + count;

	swap(arr[pivotIndex], arr[s]);

	//ab pivot ke chote element ko ek taraf rakhna hai

	int i = s;
	int j = e;

	while(i < pivotIndex && j > pivotIndex){

		while(arr[i] <= pivot){			// impotant point  (=)  ka use isme denote karta hai
										// ki tum duplicate element ko kahan rakhna chahte ho
										// left main ya right mai
			i++;
		}
		while(arr[j] > pivot){
			j--;
		}
		if(i < pivotIndex && j > pivotIndex)
		{
			swap(arr[i++] , arr[j--]);
		}
	}
	return pivotIndex;

}
void quickSort(int arr[], int s, int e){

	//base case
	if(s >= e){
		return ;

	}
	// partition karna hai 
	int p = partition(arr, s, e);

	//left part ko sort karn hai
	quickSort(arr, s, p-1);


	//right part ko sort karna hai
	quickSort(arr, p+1, e);
}

int main(int argc, char* argv[2]){

		srand(time(NULL));

		int n = atol( argv[1]);
		int arr[n];

		for(int i=0;i<n;i++){
			arr[i] = rand()%n;

		}


	//int arr[8] = {6, 6, -6, -2, -4, -6, 2, -6 };

	//int n=8;
		clock_t start, end;

		start = clock();

	quickSort(arr, 0, n-1);

		end = clock();

		double time_taken = (double) (end - start)/ CLOCKS_PER_SEC;

		cout << endl;

		cout << endl << "Total time taken " << time_taken << "sec" << endl ;


	// Array element ko print karna hai

	//for(int i =0; i<n; i++){

	//	cout << arr[i] <<"\t";
//	}
	return 0;
}