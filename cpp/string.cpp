#include<iostream>
using namespace std;

int main(){

	string str = "babbar";

	cout<<"\nlength : "<<str.length();

	str[2] = 0;

	cout<<"\nlength : "<<str.length();

	cout<<endl;
	cout<<str;
}