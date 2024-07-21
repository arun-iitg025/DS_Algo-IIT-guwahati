#include<iostream>

using namespace std;
bool isPrime(int *arr, int size){		// as a pointer pass hota hai int *arr = int arr[] both are SAME

	// base case
	if(size == 0 || size == 1){
		return true;
	}


	if(arr[0] > arr[1]){

		return false;
	}
	else{

		int remainingpart = isPrime(arr+1, size-1);
		return 	remainingpart;
	}
}

int main(){

	int arr[6] = {3,6,14,19,23,28,};

	int ans = isPrime(arr, 6);

	if(ans){
		cout << "\n A shorted array" << "\n";
	}
	else
	{
		cout << "\n Not a shorted Array : " << "\n";
	}
	return 0;
}