#include<iostream>
using namespace std;
void reverse(int arr[], int n){

	int start = 0;
	int end = n-1;

	while(start<=end){

		swap( arr[start], arr[end]);
		start++;
		end--;
	} 
}

void printArray(int arr[], int n){

	for(int i=0; i<n; i++){

		cout << arr[i]<<" ";
	}
	cout<<endl;

}



int main(){

	int arr[6]={12,23,34,56,67,75};

	int num[5]={-24,55,43,-88,54};

	reverse(arr, 6);
	reverse(num ,5);

	printArray(arr, 6);
	printArray(num, 5);

	return 0;
}