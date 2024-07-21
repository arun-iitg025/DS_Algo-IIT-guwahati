// array must be in  shiorted array (increasing order )

#include<iostream>
using namespace std;
int firstoccurance(int arr[], int size, int key){

	int s = 0, e = size-1;
	int ans = -1;

	int mid = s + (e - s)/2;

	while( s <= e){

		if(arr[mid] == key){

			ans = mid;
			e = mid-1;
		}
		else if(key > arr[mid]){ // right main jao

			s = mid+1;
		}
		else{		// left main jaao
				e = mid - 1;
		}
		
		mid = s + (e - s)/2;		
	}
	return ans;
}
int lastoccurance(int arr[], int size, int key){

	int s = 0, e = size-1;
	int ans = -1;

	int mid = s + (e - s)/2;

	while( s <= e){

		if(arr[mid] == key){

			ans = mid;
			s = mid +1;
		}
		else if(key > arr[mid]){ // right main jaao

			s = mid+1;
		}
		else if(key < arr[mid]){ // left main jaao

				e = mid - 1;
		}
		
		mid = s + (e - s)/2;		
	}
	return ans;
}

int main(){
	int even[6]={2, 3, 3, 4, 5, 6};


	int first = firstoccurance(even, 6, 3);
	int last = lastoccurance(even, 6, 3);


	cout<<endl;

	cout<<"first occurance of 3 in index: "<< first <<endl;

	cout<<"last occurance of 3 in index: "<< last <<endl;
	cout<<endl;

	cout << "\nTotal no of occcurance : "<< ((last - first ) +1 )<<endl;


	return 0;


}