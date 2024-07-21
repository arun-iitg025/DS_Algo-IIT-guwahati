#include<iostream>
using namespace std;

int main(){

	int n;
	cout<<"\nEnter the rupees: "<<endl;
	cin>>n;

	int note;
	cout<<"\nEnter the note you want: "<<endl;
	cin>>note;

	int no_of_note;


	switch(note){

		case 100: //int no_of_note;

					no_of_note= n/100;

					cout<<"no_of_note= "<< no_of_note<<endl;
					break;

		case 50: no_of_note = n/50;

				cout<<"no_of_note: "<<no_of_note<<endl;

				break;

		case 20: no_of_note = n/20;

				cout<<"no_of_note: "<<no_of_note<<endl;
				break;


		case 1: no_of_note = n/1;

				cout<<"no_of_note: "<<no_of_note<<endl;
				break;

		default : cout<<"\nEnter the valid note: ";

	}
	return 0;
}