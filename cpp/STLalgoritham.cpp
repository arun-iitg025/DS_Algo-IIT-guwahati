#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(7);

	cout<<"\nTHe array element are: ";
	for(int i:v){
		cout<<i<<"\t";
	}

	cout<<endl;
	cout<<endl;
	cout<<"finding 6 --> "<<binary_search(v.begin(), v.end(),6)<<endl;
	cout<<endl;
	cout<<"lower bound-->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
	cout<<endl;
	cout<<"upper bound-->"<<upper_bound(v.begin(), v.end(),4)-v.begin()<<endl;

	int a = 3;
	int b = 5;

	cout<<"\nmin--> "<<min(a,b);
	cout<<endl;
	cout<<"\nmax-->"<<max(a,b);

	swap(a,b);
	cout<<endl;
	cout<<"\na = "<<a<<"\t"<<"b = "<<b<<endl;

	string abcd = "abcd";

	reverse(abcd.begin(),abcd.end());

	cout<<"\nString =  "<<abcd<<endl;

	
	rotate(v.begin(),v.begin()+1,v.end());
	cout<<"\nAfter rotate : ";
	for(int i:v){
		cout<<i<<"\t";
	}

}