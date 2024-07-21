#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, i=0;
	cout<<"\nEnter the number: ";
	cin>>n;

	int ans=0;

	while(n!=0){

		int bit = n&1;

		ans= (bit * pow(10,i))+ans;

		n=n>>1;
		i++;

	}
	cout<<"Ans = "<<ans;
	return 0;
}