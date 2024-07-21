#include<iostream>
using namespace std;


int getLength(char arr[]){		// secon way to find the length of the char array

		int count = 0;

		for(int i=0; arr[i]!='\0';i++){

			count++;
		}
		return count;
}

void reverse(char arr[], int n){

	int start = 0;
	int end = n-1;

	while(start < end ){

		swap(arr[start], arr[end]);

		start++;
		end--;
	}
}

int main(){

	char name[29];
	cin>>name;
	cout<<"\nYour name is : ";
	cout<<name<<endl;
	int count = 0;

	//first way

	int i=0;
	while(name[i]!=0){

		count++;
		i++;
	}
	cout<<"\nlength: "<<count;


	int len = getLength(name);

	cout<<"\nLength : "<<len;

	reverse(name, len);
	cout<<"\nYour reverse name is: "<<name;

	return 0;

}