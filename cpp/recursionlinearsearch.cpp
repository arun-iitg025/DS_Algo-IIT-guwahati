#include<iostream>

using namespace std;
void PrintArray(int *arr, int size){

	cout << "\nSize of the Array is " << size ;
	cout << endl << endl;
	// printing Array element 
	for(int i=0; i<size; i++){

		cout << arr[i] << "\t";
	}
	cout << endl << endl;
}

bool linearSearch(int *arr, int size , int key){

	PrintArray(arr, size);

	if(size == 0){
		return false;
	}
	if(arr[0] == key){

		return 1;
	}
	else{

		bool remainingPart =  linearSearch(arr+1, size-1, key);
		return remainingPart;
		
	}
}
int main(){

	int arr[6] = {2,4,6,8,9,5};

	int size  = 6;
	int key = 5;

	int ans = linearSearch(arr, size, key);

	if(ans){

		cout << "\nElement present in the Array " << endl;

	}
	else
		cout << "\nElement not present in the Array " << endl;

		return 0;
}