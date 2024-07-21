#include<iostream>
using namespace std;


int main()
{
	int arr[10] = {23, 122, 42, 67};

	cout<<"\nAdress of the first memory block: "<<arr<<endl;
	cout<<arr[0]<<endl;

	cout<<"\nAdress of the first memory block : "<<&arr[0]<<endl;

	cout<<"\n4th: "<<*arr<<endl;
	cout<<"\n5th : "<<*arr +1<<endl;
	cout<<"\n6th: "<<*(arr+1)<<endl;
	cout<<"\n7th:"<<*(arr)+1<<endl;
	cout<<"\n8th: "<<arr[2]<<endl;
	cout<<"\n9th: "<<*(arr+2)<<endl;

	cout<<"\n element : "<<1[arr];

	cout<<"\nsize of array: "<<sizeof(arr)<<endl;

	int *ptr = &arr[0];
	cout<<"\nSize of pointer: "<<sizeof(ptr)<<endl;
	return 0;	
}