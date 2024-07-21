#include<iostream>
#include<map>

using namespace std;

int main(){

	map<int, string> m;
	m[1]="babbar";
	m[12]="kumar";
	m[2]="love";

	m.insert({5,"bheem"});

	cout<<"before erase : "<<endl;
	for(auto i: m){

		cout<<i.first<<"\t"<<i.second<<endl;

	}cout<<"\n present number -23 : "<<m.count(-23)<<endl;

	//m.erase(5);
	cout<<"\nAfter erase :"<<endl;
	for(auto i:m){

		cout<<i.first<<"\t"<<i.second<<endl;
	}

	auto it = m.find(5);


	cout<<endl;
	cout<<endl;
	cout<<"finding value-->  ";
	for(auto i=it; i!=m.end();i++){

		cout<<(*i).first<<"\t";
	}
}