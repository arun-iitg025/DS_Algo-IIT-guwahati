#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout<<"\nEnter the number: ";
	cin>>n;

	int sum=0;
	for(i=0;i<=n;i++){
		sum=sum+i;

	}
	cout<<"\nsum = "<< sum;
	return 0;
}