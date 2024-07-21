#include<iostream>
using namespace std;

int main()
{
	int n,row=1;
	cout<<"\nEnter the number";
	cin>>n;
	while(row<=n){
		
		int col=1;
		while(col<=row){
			cout<<row<<"\t";
			col=col+1;
		}
		cout<<endl;
		cout<<endl;
		row=row+1;
	}
	return 0;
}