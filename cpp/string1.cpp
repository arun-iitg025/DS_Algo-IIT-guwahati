

#include<iostream>

using namespace std;

int main(){

	string s;

	getline(cin, s);

	cout<<"\nYour string is: "<<s;

	s.erase(2,3);
cout<<"\nYour string is: "<<s;

	string temp = " ";

	for(int i=0; i<s.length();i++){

		if(s[i] == ' '){

			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else{

			temp.push_back(s[i]);
		}
	}
	cout<<"\nYour string is: "<<temp;

	return 0;
}