#include<iostream>
#include<string.h>
using namespace std;
bool isPalindrom(char s[]){

	int start= 0;
	int end = strlen(s)-1;

	while(start <= end){

		if(s[start] != s[end])
		{
			return 0;
		}


		else{
			start++;
			end--;
		}
	}
	return 1;
}


int main(){

	char str[20];
	cout<<"\nEnter the string: ";
	cin>>str;

	int l = strlen(str);
	cout<<"\nlength: "<<l;
	

	if(isPalindrom(str)){

		cout<<"\nA palindrom ";

	}
	else

		cout<<"\nNot a palindrom ";
	return 0;
}