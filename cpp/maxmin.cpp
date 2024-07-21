#include<iostream>
using namespace std;

int getMax(int num[], int n){

	int max=INT_MIN;	//int_min --> ka matlab int ka range main sabse chhota value hai jo humlog maan liye hai
	for(int i=0; i<n;i++){

		if(num[i]> max){
			max =num[i];

		}
	}
	// returning max value
	return max;
}
int getMin(int num[], int n){

	int min=INT_MAX;
	for(int i=0; i<n;i++){

		if(num[i]<min){
			min =num[i];

		}
	}
	// returning max value
	return min;
}


int main(){

	int size;
	cout<<"\nEnter the size of array: ";
	cin>>size;

	int arr[100];
	// taking an inpit of an array 
	cout<<"\nEnter the array element : "<<endl;
	for(int i=0;i<size;i++){

			cin>>arr[i];
	}
	cout<<"maximum value is : "<<getMax(arr, size)<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"minimum value is : "<<getMin(arr, size)<<endl;

	
	return 0;

}