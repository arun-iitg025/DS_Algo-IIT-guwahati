#include<iostream>
using namespace std;
void reverse(string& str, int i, int j){

// printing  how recursion work
	cout << " \n recursion call : "<< str ;
	if(i > j){
		return ;
	}

	swap(str[i], str[j]);

	i++;
	j--;
	reverse(str, i, j);
}

int main(){

	string name = "computer";

	reverse(name, 0 , name.length()-1);

	cout << "\nReverse string : " <<  name ;

	return 0;

} 