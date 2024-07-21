#include<iostream>
using namespace std;

int main()
{
	int n,row=1;

cout<<"\nEnter the number:";
cin>>n;

while(row<=n)
{
	int col=1;
	while(col<=row){
		cout<<row-col+1<<"\t";
		
		col++;
	}
	cout<<endl;
	cout<<endl;
	row++;

}
}