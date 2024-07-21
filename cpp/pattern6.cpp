/*A       B       C       D       E

F       G       H       I       J

K       L       M       N       O

P       Q       R       S       T

U       V       W       X       Y*/
#include<iostream>
using namespace std;

int main()
{
	int n,row=1;
	char start='A';
	cout<<"\nEnter the number: ";
	cin>>n;

	while(row<=n){

		int col=1;
		while(col<=n){

			cout<<start<<"\t";
			start++;
			col++;

		}
		cout<<endl;
		cout<<endl;
		row++;
	}
	return 0;
}