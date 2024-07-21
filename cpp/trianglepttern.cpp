#include<iostream>
using namespace std;

int main()
{
	int n,i=1;
	cout<<"\nEnter the number: ";
	cin>>n;
	//int j=n;
	while(i<=n){

		int j=1;
		while(j<=i){
			cout<<"*"<<" ";
			j++;
		}
		cout<<endl;
		//j=n-i;
		i++;

	}
	return 0;
}