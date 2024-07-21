#include<iostream>
using namespace std;

int main()
{
	int choice, a, b, c, ch,i;
	cout<<"\n1. Addition";
	cout<<"\n2. Sbtrsction";
	cout<<"\n3. prime or not ";

	cout<<"\nEnter your choice:";
	cin>>choice;

	switch(choice)
	{
		case 1: cout<<"enter the two number : "<<endl;
				cin>>a>>b;

				c=a+b;

				cout<<"Sum = "<< c <<endl;
				break;

		case 2: cout<<"\nEnter the two number: "<<endl;
				cin>> a >> b ;

				if(a>b){

					c= a - b;

				}
				else
					ch=a;
					 a=b;
					 b=ch;

					 c=a-b;

				cout<< "sub= "<< c <<endl;
				break;

	/*	case 3: cout<<"\nEnter the number:" <<endl;
				cin>>a;

				bool isprime=1;
		

				for(i=2;i<a;i++){

					if(a%i==0){

						isprime= 0;
						break;
					}
				} 
				if(isprime){
					cout<<"\nA prime number";

				}
				else 
				{
					cout<< "\nNot a prime number ";

				}
				break;*/

		default: cout<<"\nInvalid choice";

	}
	return 0;

}