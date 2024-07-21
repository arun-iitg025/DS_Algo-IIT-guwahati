#include<iostream>
using namespace std;

int main()
{
	int n, i=0;
	int count=1;

	cout<<"\nEnter the number: ";
	cin>>n;

	/* for reverse order
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<n-j+1<<"\t";
			j++;
		}
		cout<<endl;
		i++;
	}*/
	while(i<=n){

		int j=1;
		while(j<=n){
			cout << count  << "\t";
			count++;
			j++;
		}
		cout <<endl;
		cout <<endl;
		i++;
	}

	return 0;
}