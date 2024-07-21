#include<iostream>
using namespace std;


//function signature
int factorial(int n){

	// function body
	int fact = 1;
	int i;

	for(i=1;i<=n;i++){

		fact=fact*i;
	}
	return fact;
}
int nCr(int n ,int r){


	int num=factorial(n);
	int denum= factorial(r)*factorial(n-r);

	int ans =num/denum;

	return ans;

}
int main(){

	int n, r;
	cout<<"\nEnter the value of n and r: "<<endl;
	cin>>n>>r;

	int answer = nCr(n, r);

	cout<<" answer: "<<answer<<endl;
	return 0;

}