#include<iostream>
#include<list>

using namespace std;

int main(){

	list<int> l;

	list<int> n(5,100);

	for(int i:n)
	{
		cout<<i<<"\t";

	}
	l.push_back(1);
	l.push_back(2);


	cout<<endl;
	cout<<endl;
	for(int i:l)
	{
		cout<<i<<"\t";

	}

	list<int> a;

	/*for(int i:a){
		cin>>i;
	}
	
	for(int i:a)
	{
		cout<<i<<"\t";

	}
*/
}