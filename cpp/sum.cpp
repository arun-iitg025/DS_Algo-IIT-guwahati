#include<iostream>
using namespace std;

int main()
{

	int n,i=0;
	int sum =0;

	 cout<<"\nEnter the number of n: ";
	 cin>>n;

	 while(i<=n)
	 {
	 	sum=sum+i;
	 //	cout<< sum ;
	 	i++;

	 }
	 cout<<"sum: "<< sum;
	 return 0;
}