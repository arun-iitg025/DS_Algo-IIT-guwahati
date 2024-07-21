#include<iostream>

using namespace std;

class human{			// base class / super class / perents class

public:
	int Weight;
	int Age;
	int Height;

	public:

	int getAge(){

		return this->Age;
	}
	void setAge(int age){

		this->Age = age;
	}


	int getWeight(){
		return this->Weight;
	}
	void setWeight(int w){

		this->Weight = w;

	}

	int getHeight(){
		return this->Height;

	}
	void setHeight(int h){

		this->Height = h;
	}
};
class male: public human {

	public:
		string color;


		void sleep(){

			cout << " \nMale is sleeping :"<< endl;

		}

	     string getcolor(){
			return this->color;

		}

		
		void setcolor(string w){
			this->color = w;
		}
};

int main(){

	male object1;

	cout << "\n Weight of male is : " << object1.Weight << endl;
	cout << "\n Age of male is : " << object1.Age << endl;
	cout << "\n Height of male is : " << object1.Height << endl;

	object1.setWeight(83);

	object1.setHeight(6);

	object1.setAge(33);

	object1.setcolor("Brown");

	cout << endl << endl ;

	cout << "\n Weight of male is : " << object1.Weight << endl;
	cout << "\n Age of male is : " << object1.Age << endl;
	cout << "\n Height of male is : " << object1.Height << endl;

	cout << "\n color of male is : " << object1.color << endl;
	
	object1.sleep();

	return 0;
}