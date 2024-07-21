#include <iostream>
using namespace std;

int main()
{
	float fahrenheit, celcius;
	cout << "\nEnter the temparature in fahrenheit: ";
	cin >> fahrenheit;
	celcius = (fahrenheit - 32) * 5.0 / 9.0;

	cout << "celcius: " << celcius;
	return 0;
}