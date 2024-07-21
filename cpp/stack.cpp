#include<iostream>
#include<stack>
using namespace std;

int main(){

	stack<string> s;		// stack means FIRST IN LAST OUT

	s.push("love");
	s.push("babbar");
	s.push("kumar");

	cout<<"\nTop Element: "<<s.top()<<endl;
//	cout<<"\nBottom element: "<<s.bottom()<<endl;
	s.pop();

	cout<<"\nTop Element : "<<s.top()<<endl;
	cout<<"\nSize of the stack: "<<s.size()<<endl;		// 2 aayega kyunki maine pop kiya hai

	cout<<"\nEmpty or not: "<< s.empty()<<endl;
}