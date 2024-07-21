// implimentation of vector

#include<iostream>
using namespace std;

class vector{
	public:
	int *arr;
	int size;

	// cunstructor vector

	vector(int m){
		size = m;
		arr = new int[size];
	}

};

int main(){
	vector v(5);
	v.arr[0] = 2;
	v.arr[1] = 72;
	v.arr[2] = 23;
	v.arr[3] = 4;
	v.arr[4] = 5;

	for(int i=0; i<5; i++){
		cout << v.arr[i] << "\t";
	}

	return 0;
}