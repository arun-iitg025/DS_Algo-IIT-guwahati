#include<iostream>
#include<queue>

using namespace std;

int main(){

	queue<string> q;

	q.push("love");
	q.push("babbar");
	q.push("kumar");


	cout<<"\nsize before pop: "<<q.size()<<endl;

	cout<<"\nFirst element: "<<q.front()<<endl;

	q.pop();
	cout<<"\nfirst element:  "<<q.front()<<endl;

	cout<<"\nsize after pop: "<<q.size()<<endl;

}