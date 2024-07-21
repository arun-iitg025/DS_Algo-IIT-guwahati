#include<iostream>
using namespace std;
int power(int a, int b){

	if(b == 0)
		return 1;
	if( b == 1)
		return a;

	if(b%2==0){

		int ans = power(a, b/2);
		return ans*ans;

	}
	else{
		int ans = power(a, b/2);
		return a*ans*ans;
	}
}
int main(){

	int a, b;
	cout << "\nEnter the number : " ;
	cin >> a >> b;

	int ans = power(a, b);
	cout << "\nYour answer is : " << ans <<endl;

	return 0;
}