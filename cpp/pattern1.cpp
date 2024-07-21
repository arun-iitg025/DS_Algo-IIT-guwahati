#include<iostream>
using namespace std;

int main()
{
	int n,i=1;
	cout<<"\nEnter the value of n: ";
	cin>>n;

	while(i<=n){
		int j=1;
		while(j<=n){
			cout<< j <<"\t";
			j++;

		}
		cout<<endl;
		i++;

	}
	return 0;

	
}