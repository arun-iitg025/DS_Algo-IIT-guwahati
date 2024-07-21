#include<iostream>
#include<stack>
using namespace std;

int main(){

	string str = "babbar";

	stack<char> s;

	for(int i=0; i<str.length(); i++){

		char ch = str[i];
		s.push(ch);

	}

	string ans = " ";
	while(!s.empty()){
		char ch = s.top();
		ans.push_back(ch);		// string mai DAALNE se push_back() likhte hai
								// stack mai daalne se only push() likhjte hai
		s.pop();
	}

	cout << endl << " THE REVERSE STRING : " << ans << endl;


	return 0;

}