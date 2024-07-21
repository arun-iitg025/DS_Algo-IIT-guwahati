#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){

	int studentcount = 1;
	int pagesum = 0;

	for(int i = 0; i<n; i++){

		if(pagesum +arr[i] <= mid){

			pagesum += arr[i];
		}
		else{

			studentcount++;
			if(studentcount > m || arr[i] > mid){

				return false;
			}
			pagesum = arr[i];
		}
	}
	return true;
}

int bookallocation(int arr[], int n, int m){

	int start = 0;
	int sum = 0;
	for(int i=0; i<n; i++){

		sum += arr[i];
	}
	int end = sum; 
	int ans = -1;
	int mid = start + (end - start)/2;
	while(start <= end){

		if(isPossible(arr, n, m, mid)){

			ans= mid;
			end = mid - 1;

		}

		else{

			start = mid + 1;
		}
		mid = start + (end - start)/2;
	}
	return ans;
}

int main(){

	int size;
	cout<<"\nEnter the size of an array in shorted : ";
	cin>>size;

	int arr[size];
	for(int i=0; i<size; i++){

		cin >> arr[i];

	}
	for(int i=0; i<size; i++){

		cout << arr[i] <<"\t"; 

	}
	int a ;
	cout<<"\nEnter the number of student: ";
	cin>>a;
	cout << bookallocation(arr, size, a ) << endl;

}