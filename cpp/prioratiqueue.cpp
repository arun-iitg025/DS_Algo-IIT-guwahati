#include<iostream>
#include<queue>

using namespace std;

int main(){

	// max heap
	priority_queue<int> maxi;

	//min heap
	priority_queue<int, vector<int >, greater<int> > mini;


	maxi.push(1);
	maxi.push(3);
	maxi.push(15);
	maxi.push(12);
	maxi.push(6);

	cout<<"\nsize"<<maxi.size()<<endl;
	int n=maxi.size();

	for(int i=0; i<n; i++){

		cout<<maxi.top()<<"\t";
		maxi.pop();

	}
	cout<<endl;
	cout<<endl;
	cout<<"\nsize of maxi: "<<maxi.size()<<endl;

	mini.push(5);
	mini.push(8);
	mini.push(3);
	mini.push(9);
	int m=mini.size();
	for(int i=0; i<m; i++){

		cout<<mini.top()<<"\t";
		mini.pop();	
	}

	cout<<"\nsize of mini: "<<mini.size()<<endl;
}