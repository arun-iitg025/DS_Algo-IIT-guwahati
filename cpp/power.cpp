#include<iostream>
using namespace std;
int pow(int a, int b){
	int ans =1;
	int i;

	for(i=1;i<=b;i++){

		 ans = ans*a;

	}
	return ans;

}
int main(){

	int a,b;

	cout<<"\nEnter the value of a and b: "<<endl;
	cin>>a>>b;

	int answer= pow(a,b);
	cout<<endl;

	cout << answer <<endl;

	return 0;

}