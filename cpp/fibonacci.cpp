#include<iostream>
using namespace std;

int main(){

	int n,a=0,b=1,i;
	cout<<"\nEnter the number : ";
	cin>>n;

	int sum=0;
	cout<<endl;
	cout<<endl;

	cout<<"Fibinacci =\t";
	cout<<a<<"\t";
	cout<<b<<"\t";

	for(i=0;i<=n;i++){

		sum=a+b;
		cout<<sum<<"\t";
		a=b;
		b=sum;
	}
	cout<<endl;
	cout<<endl;
	return 0;
}