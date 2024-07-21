#include<iostream>
using namespace std;

int main()
{
	int n,i=2;
	int sum=0;
	cout<<"\nEnter the number of n: ";
	cin>>n;

	while(i<=n)
	{
		sum=sum+i;
		i=i+2;
	}
	cout<<"sum: "<<sum;
	return 0;
}