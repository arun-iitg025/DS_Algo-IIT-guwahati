#include<iostream>
using namespace std;

char getocccharacter(string s){

	int arr[26] = {0};

	// create an of counting an characters 
	for(int i=0; i<s.length();i++){

		char ch = s[i];

		// lowercase 
		int number = 0;
		if(ch >='a' && ch <='z'){

			number = ch -'a';

		}
		else{	//uppercase

			number = ch -'A';

		}

		arr[number]++;

	}
	int maxi = -1;
	int ans = -1;

	for(int i = 0; i<26; i++){

		if(maxi < arr[i]){
			ans = i;
			maxi = arr[i];
		}
	}

	return 'a'+ans;
}
int main(){

	string s;
	cin>>s;
	cout<<getocccharacter(s);
	return 0;

}