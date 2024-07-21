#include<iostream>
using namespace std;

int main(){

	int n1,n2;
	cout<<"\nEnter the number of n1 and n2: ";
	cin>>n1>>n2;

	int i=1;
	while(i<=n1)
	{
		int j=1;
		while(j<=n2){
			cout<<"*";
			j++;
		}
		cout<<endl;
		n2=n2-1;
		i++;
	}
	return 0;
}
