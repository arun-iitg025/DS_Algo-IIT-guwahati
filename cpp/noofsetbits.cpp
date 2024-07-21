#include<iostream>
using namespace std;

int main(){

	int a,b;
	cout<<"\nEnter the number of a and b : "<<endl;
	cin>>a>>b;

	int count =0;
	while(a!=0){

		if(a&1==1){
			count++;
		}
		a=a>>1;

	}
	while(b!=0){
		if(b&1==1){
			count++;
		}
		b=b>>1;
	}

	cout<<" total no of set bit :"<< count ;

		return 0;
}