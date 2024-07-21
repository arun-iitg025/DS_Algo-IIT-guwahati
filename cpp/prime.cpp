#include<iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"\nEnter the number: ";
	cin>>n;

	bool isprime=1;

	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			isprime=0;
			break;
		}
	}
	if(isprime)
	{
		cout<<" A prime number";

	}
	else{
		cout<<" Not A prime number";

	}
	return 0;

}