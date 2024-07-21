#include<iostream>
#include<vector>
using namespace std;
int main(){

	vector<int> v;
	vector<int> a(5,1);		// array ke sabhi index mai 1 assign ho jayega

	vector<int> last(a);


	cout<<"\nPrint last"<<endl;

	for(int i:a){
		cout<< i <<"\t"; 
	}

	cout<<"\nCapacity--> "<<v.capacity()<<endl;

	v.push_back(2);
	cout<<"\nCapacity-->"<<v.capacity()<<endl;

	v.push_back(9);
	cout<<"\nCapacity-->"<<v.capacity()<<endl;
	v.push_back(3);
	cout<<"\nCapacity-->"<<v.capacity()<<endl;	

	cout<<endl;
	cout<<"\nSize --> "<<v.size()<<endl;


	cout<<endl;
	cout<<"\nElement of second index: "<<v.at(2)<<endl;

	cout<<"\nfront: "<<v.front()<<endl;
	cout<<"\nlast: "<< v.back()<<endl;
	cout<<"\nBefore pop-->"<<endl;
	for(int i:v){

		cout<<i<<"\t";
	}
	v.pop_back();		// matlab last ke element ko fekega bahar


	cout<<"\nAfter pop back: "<<endl;
	for(int i:v){
		cout<< i <<"\t"; 
	}
	cout<<"\nBefore clear size: "<<v.size()<<endl;

	v.clear();
	cout<<"\nAfter clear size: "<<v.size()<<endl;

}