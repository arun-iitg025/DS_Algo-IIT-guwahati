#include<iostream>
using namespace std;
long long int squareinteger(int n){

	int start =0;
	int end =n;
	long long int mid = start + (end - start)/2;
	int ans = -1;

	while( start <= end){

		long long square = mid*mid;

		if( square == n){

			return mid;

		}
		else if(square < n){

			ans = mid;
			start = mid + 1;

		}
		else {

			end = mid -1;
		}
		mid = start + (end - start)/2;
	}
	return ans;

}
double morePrecision(int n, int precision, int tempSoln){

	double factor = 1;
	double ans = tempSoln;
	for(int i = 0; i<precision; i++){
		factor = factor/10;

		for(double j=ans; j*j<n; j=j+factor){

			ans= j;
		}
	}
	return ans;
}

int main(){

	int n;
	cout<<"\nEnter the number: "<< endl;
	cin>>n;
	int tempSoln = squareinteger(n);
	// double aa =morePrecision(n, 3, tempSoln);

	cout <<"square root : " << morePrecision(n, 3, tempSoln)<< endl; 

	return 0;
}