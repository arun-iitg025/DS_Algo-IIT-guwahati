#include<iostream>
using namespace std;

int main(){

	int size;
	cout<<"\nEnter the size of an array: ";
	cin>>size;
	int arr[size];
	// input array element
	cout<<"\nEnter the array element:---->";
	for(int i=0; i<size; i++){

		cin>>arr[i];

	} 
	//printing the array element 
	cout<<endl;

	cout<<"\nPrinting the array element ---->";
	for(int i=0; i<size;i++){

		cout<<arr[i]<<"\t";

	}

	int sum =0;

	for(int i=0;i<size; i++){

		sum=sum+arr[i];
	}

	cout<<endl;

	//printing total no of sum
	cout<<"\nsum--->"<<sum<<endl;
	return 0;
}