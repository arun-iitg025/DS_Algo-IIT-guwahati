#include<iostream>
#include<set>

using namespace std;

int main(){

	set<int> s;		// duplicate value ko bhi 1 hi baar consider kiya jayega 

	s.insert(8);
	s.insert(3);
	s.insert(2);
	s.insert(2);
	s.insert(3);		// insert, find , count ,erase ka time complexity O(log n ) hai.
	s.insert(7);
	s.insert(5);
	s.insert(6);		//size, begin , end , empty |||	karne ka time complexity O(1) hai.
	s.insert(5);
	s.insert(3);
	s.insert(8);

	cout <<"\nSets element are: " << endl << endl;

	for(auto i:s){
		cout<<i<<"\t";
	}
	cout<<endl <<"\nDelete last term : " << endl << endl;

	s.erase(s.begin());

	for(auto i : s){

		cout<<i<<"\t";

	}
	cout<<endl;

	cout <<"\nAfter deleting set elements Are: "<< endl<< endl;

	set<int>::iterator it = s.begin();
	it++;

	s.erase(it);

	for(auto i : s){

		cout<<i<<"\t";

	}
	cout<<endl;
	cout<<"\n-5 is present or not : "<< s.count(-5)<<endl;


	set<int>::iterator itr = s.find(7);			// jis value ko find karenge wahan se start hoga number

	for(auto it = itr; it!=s.end();it++){

		cout<<*it<<"\t";

	}
	cout<<endl;

	return 0;
}