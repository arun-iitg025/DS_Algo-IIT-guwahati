// implimentation of vector

#include<iostream>
using namespace std;

template <class T>

class vector{
	public:
	T *arr;
	int size;

	// cunstructor vector

	vector(int m){
		size = m;
		arr = new T[size];
	}
	T dotProduct(vector &v){
		T d = 0;
		for(int i=0; i<size; i++){
			d += this->arr[i] * v.arr[i];
		}
		return d;
	}

};

int main(){

	vector<float> v1(5);
	v1.arr[0] = 2.0;
	v1.arr[1] = 3.2;
	v1.arr[2] = 1.2;
	v1.arr[3] = 9.8;
	v1.arr[4] = 3.5;

	for(int i=0; i<5; i++){
		cout << v1.arr[i] << "\t";
	}

	vector<float> v2(5);
	v2.arr[0] = 0.2;
	v2.arr[1] = 7.2;
	v2.arr[2] = 2.3;
	v2.arr[3] = 0.4;
	v2.arr[4] = 0.5;

	float a = v1.dotProduct(v2);
	cout << endl <<"sum : " << a << endl;
	return 0;
}