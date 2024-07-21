#include<iostream>
using namespace std;
bool search(int num[], int n, int key){ 	//bool--> ka use isliye kar rahe kyuki isme 1 or 0 return karwana hai 

	for(int i=0;i<n; i++){

		if(num[i] == key)
		{
			return 1;
			break;

		}
		
	}
	return 0;

}

int main(){
	int size;
	cout<<"\nEnter the size of an array: ";
	cin>>size;
	int arr[size];
	//taking input of array element 
	cout<<"\nEnter the array element:--> ";
	for(int i=0;i<size;i++){

		cin>>arr[i];

	}
	//printing the array element
	cout<<"\nThe array element are:--->";
	for(int i=0;i<size;i++){

		cout<<arr[i]<<"\t";
	}

	int key;
	cout<<"\nEnter the key value:-->";
	cin>>key;

	bool found = search(arr, size, key);

	if(found){

		cout<<"\nElement present in array: "<<endl;

	}
	else{
		cout<<"\nElement absent in the array:";

	}

	return 0;

}