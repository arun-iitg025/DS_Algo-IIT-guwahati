#include<iostream>

using namespace std;

void sayDigit(int n, string arr[]){

	// base case
	if( n == 0){
		return ;
	}

	// preocessing
	int digit = n % 10;

	n = n / 10;

	sayDigit(n, arr);

	cout << arr[digit] << "\t";
}

int main(){

		int n;

	string arr[10] = {"zero", "one", "two", "three", "four",
						 "five", "six", "seven", "eight", "nine"};

	
	cout << "\nEnter the number : " ;
	cin >> n;

	sayDigit(n, arr);

	return 0;

}