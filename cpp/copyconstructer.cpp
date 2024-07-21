#include<iostream>
using namespace std;

class Hero{

	// properties
private:
	int Health;

public:
	char level;


// Simple constructer 


	Hero(){

		cout << "\nSimple construter called: " << endl ;

	}

	// Parameterized constructure 


	Hero(int Health){

		this->Health = Health;

	}

	Hero(int Health, char level){
		this->level = level;
		this->Health = Health;

	}


// printing function for print 


	void print(){

		cout<< "\nHealth : " << this->Health <<endl;
		cout<< "\nlevel: " << this->level << endl;

	}

	// creating our own copy cionstructer				// agar copy constructer nahi bhi banate to
														// automatic call ho jata hai.

	Hero(Hero& temp){

		cout << "\n Copy constructer called: " << endl;

		this->Health = temp.Health;
		this->level = temp.level;

	}

};


int main(){

	Hero S(120, 'Y');

	S.print();

	cout << "\n printing for R: " << endl ;


	Hero R(S);

	R.print();


}