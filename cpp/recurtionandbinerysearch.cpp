#include<iostream>
using namespace std;
void printArray(int *arr, int s, int e){

	for(int i=s; i<=e; i++){
		cout << arr[i] << "\t"; 
	}
	cout << endl;
}
bool binerysearch(int *arr, int s, int e, int key){


	printArray(arr, s, e);
	// base case
	if(s>e){

		return false;

	}
	int mid = s + (e-s)/2;

	cout << "\nvalue of mid is  " << arr[mid] << endl;

	if(arr[mid]==key){
		return true;
	}



	if(mid>key){

		return binerysearch(arr, s, mid-1, key);
	}
	else{
		return binerysearch(arr, mid+1, e, key);
	}
}

int main(){

	int arr[10] = {2,4,6,8,9,12,45,78,900,1000};

	int e = 9 ;
	int s = 0;
	int key = 1000;

	int ans = binerysearch(arr, s, e ,key);
	if(ans){

		cout << "\nElement present in the Array " << endl;

	}
	else {
		cout << "\nElement not present in the Array " << endl;
	}

	return 0;

}