/*A       B       C       D       E

A       B       C       D       E

A       B       C       D       E

A       B       C       D       E

A       B       C       D       E*/
#include<iostream>
using namespace std;

int main()
{
	int n,row=1;
	cout<<"enter the number: ";
	cin>>n;

	while(row<=n)
	{
		int col=1;
		//char ch='A'+col-1;
		while(col<=n){
			char ch='A'+col-1;
			cout<<ch<<"\t";
			col++;

		}
		cout<<endl;
		cout<<endl;
		row++;

	}
	return 0;

}