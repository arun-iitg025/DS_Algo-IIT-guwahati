#include<iostream>
#include<dirent.h>
#include<fstream>
#include<string.h>
#include <algorithm>
using namespace std;

void insertionSort(int arr[], int n){		

	for(int i=1; i<n; i++){		// round ko darshata hai

		int temp = arr[i];
		int j=i-1;
		for(j=i-1; j>=0; j--){

			if(arr[j] > temp){

				// shift kardo
				arr[j+1] = arr[j];
			}
			else{	// ruk jaao

				break;
			}
		}

		arr[j+1] = temp;
	}
}

int main(int argc, char *argv[]){

	DIR *d;
	struct dirent *dir;
	

	d=opendir(argv[1]);//Input Folder
	if(d){
		while((dir=readdir(d))!=NULL){
			string s =dir->d_name;
			if(s!="." && s!=".."){

				ifstream myfile("Input/"+s);
				int size;
				myfile>>size;
				int arr[size];
				for (int i = 0; i <size; i++)
				{
					myfile>>arr[i];
				}

				insertionSort(arr,size);
				string str="/";
				ifstream yourfile(argv[2]+str+s);// Output Folder..
				for (int i = 0; i <size; i++)
				{
					int key;
					yourfile>>key;
					if(key!=arr[i]){
						cout<<"Failed"<<endl;
						return 0;
					}
				}
				cout<<"success"<<endl;	
			}
		}
	}
	else{
		cout<<"file not open";
	}

	return 0;
}