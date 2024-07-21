#include<iostream>

using namespace std;
class A{

public:

	void fun(){

		cout << "\nI am A: " << endl;

	}
};

class B{

public:
	void fun(){

		cout << "\nI am B: " << endl;

	}
};

class C: public A, public B{


};

int main(){

	C obj1;

	obj1.A::fun();

	obj1.B::fun();


	return 0;
}