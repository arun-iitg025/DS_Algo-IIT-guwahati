#include<iostream>
using namespace std;

void printArray(int arr[], int size){

	for(int i=0; i<size; i++)		// size =array length
		{
			cout<<arr[i]<<"\t";

		}

		cout<<endl;
		cout<<endl;
}

void swapAlternate(int arr[], int size){

	for(int i=0; i<size; i+=2){

		if(i+1< size){

			swap(arr[i], arr[i+1]);
		}
	}


}

int main(){

	int arr[8]={12,23,45,56,78,53,11,44};
	int brr[5]={22,43,44,67,88};

	swapAlternate(arr, 8);
	printArray(arr ,8);

	cout<<endl;
	cout<<endl;

	swapAlternate(brr, 5);
	printArray(brr, 5);


	return 0;

}