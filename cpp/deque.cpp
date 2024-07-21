#include<iostream>
#include<deque>

using namespace std;

int main(){

	deque<int> d;

	d.push_back(1);
	d.push_front(2);
	d.push_back(3);

	cout<<endl;
	cout<<"\nIndex of second: "<<d.at(1)<<endl;
	cout<<"\nFront element: "<< d.front()<<endl;
	cout<<"\nlast element: "<< d.back()<<endl;

	cout<<"\nEmpty or not: "<<d.empty()<<endl;

	// size of an array before erase
	cout<<"\nBefore erase "<< d.size()<<endl;

	d.erase(d.begin(),d.begin()+1);
	//size of an array after erase
	cout<<"\nAfter erase : "<<d.size()<<endl;
	for(int i:d){

		cout<<i<<"\t";
	}

}