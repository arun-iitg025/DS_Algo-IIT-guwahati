#include<iostream>
#include<array>
using namespace std;

int main()
{

	int arr[5]={2, 5, 6, 7, 3};


	array<int, 5> a = {2, 5, 6, 7, 3};

	int size = a.size();

	for(int i=0; i<size; i++){
		cout << a[i] <<"\t";
	}
	cout<<"\nElement of second index: "<<a.at(2);

	cout<<endl;
	cout<<"\nEmpty or Not: "<< a.empty()<<endl;
	cout<<"First Element-->"<< a.front()<<endl;
	cout<<"last Element--> "<<a.back()<<endl;

}