#include<iostream>

using namespace std;
int isPrime(int *arr, int size){		// as a pointer pass hota hai int *arr = int arr[] both are SAME

	
	// base case
	if(size == 0){
		return 0;						// function defition ko dekhna achha se imagine karna 
										// achchha samajh mai aayega 

	}
	if(size == 1){

		return arr[0];
	}

	else{

		int remainingpart = isPrime(arr+1, size-1);
		int sum = arr[0] + remainingpart;
		return 	sum;
	}

	
}

int main(){

	int arr[6] = {3,6,14,19,23,28,};

	int ans = isPrime(arr, 6);

	
	cout << "\n Sum of the Array : " << ans << "\n";
	
	return 0;
}