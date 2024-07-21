#include<iostream>
using namespace std;
bool isPalindrom(string str, int i, int j){

	// base case

	if(i>j){
		return true;
	}

	if(str[i] != str[j]){
		return false;
	}
	else{

		// recursion dekh lega 
		return isPalindrom(str, i+1, j-1);
	}
}
	

int main(){

	string name = "babbab";

	int ans = isPalindrom(name, 0, name.length()-1);

	if(ans){

		cout << "\nA palindrom " << endl;

	}
	else{

		cout << "\nNot a palindrom " << endl;
	}
	return 0;
}