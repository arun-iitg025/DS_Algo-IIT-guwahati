#include<iostream>

using namespace std;
	
int main(){

	int num = 5;

	int *ptr = &num;

	cout<<"\nAdress of num: "<<&num;
	cout<<"\nAdress of ptr: "<<ptr;
	cout<<"\nvalue : "<<*ptr;

	double d = 4.25;
	double *p2 = &d;

	cout<<"\nAdress of num: "<<&d;
	cout<<"\nAdress of ptr: "<<*p2;
	cout<<"\nvalue : "<<*p2;

// pointer ka size hamesha 4 byte hoga chahe wo int , char ,double, float

	cout<<endl;
	cout<<endl;
	cout<<"\nsize of num: "<<sizeof(num);
	cout<<"\nsize of pointer: "<<sizeof(ptr);		
	cout<<"\nsize of double pointer: "<<sizeof(p2);

	int i = 9;

	int *p = 0;

	p=&i;
	cout<<endl;
	cout<<endl;
	cout<<"\nAdress of p : "<<p;
	cout<<"\nvalue of p: "<<*p;


	return 0;

}
