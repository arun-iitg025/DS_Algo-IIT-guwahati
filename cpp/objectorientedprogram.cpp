#include<iostream>
using namespace std;

class Hero{

	// properties

//private:
public:
	int health;				// class ke bahar use nahi kar sakte hai

//public:				// class ke bahar bhi use kar sakte hai
	char level;

	void print (char level){

		cout << level << endl;
	}

// use getter function

	int gethealth(){
		return health; 
	}

	char getlevel(){

		return level;
	}

	// use setter function

	void sethealth(int h){

		health = h;
	}

	void setlevel(char ch){
		level = ch;
	}
};

int main(){



	// creation of object
	Hero ramesh;

	ramesh.setlevel('t');
	ramesh.sethealth(11);


	cout << "\nhealth of the Hero : " << ramesh.gethealth() ;
	cout << "\nlevel of the Hero : " << ramesh.getlevel();

	// use dynamically

	Hero *b = new Hero;

	b->sethealth(29);
	b->setlevel('r');

	cout << "\nhealth of the Hero : " << (*b).gethealth() ;
	cout << "\nLevel of the Hero : " << (*b).getlevel();

/*	// use setter
	ramesh.sethealth(100);
	ramesh.level = 'A';
	
	cout << "\nhealth of the Hero : " << ramesh.gethealth() ;
	cout << "\nLevel of the Hero : " << ramesh.level;
*/
	return 0;
}