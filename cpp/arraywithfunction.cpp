#include<iostream>
using namespace std;
int printArray(int arr[],int size){

	cout<<endl;
	cout<<"printing the array: "<<endl;
	cout<<endl;

	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";

	}
	cout<<endl;

	cout<<" \nPrinting DONE "<< endl;
	return 0;


}

int main(){

	int n;
	int first[3];
	n=3;
	printArray(first , 3);

	// accesing an element 
	cout<<endl;
	cout<<"value at 2 index:  "<< first[2]<<endl;


	//inintializing an array 
	int second[15]={2,4,7,5};
	 n=15;

	printArray(second, 15);


	cout<<endl;
	//eccesing an element
	cout<<"value at 4th index "<<second[3]<<endl;



	//initializing an array
	int third[10]={1};
	 n=10;
	printArray(third, 10);


	//initializing the array
	int fourth[20]={0};
	 n=20;
	printArray(fourth, 20);


	//int fifthsize= 




		return 0;
}