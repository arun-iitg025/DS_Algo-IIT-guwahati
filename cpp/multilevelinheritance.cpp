#include<iostream>

using namespace std;

class Animal{

public:
	int Weight;
	int Age;

public:

	void bark(){

		cout << "\n barking : "<< endl;

	}


};
class Human:public Animal{
public:
	int height;

	int weight;


public:

	void speak(){

		cout << "\n speaking : " << endl;

	}
};

// multiple inheritance

class Hybrid: public Human{


};


int main(){

	Hybrid b1;

	//b1.speak();
	b1.bark();

	return 0;
}