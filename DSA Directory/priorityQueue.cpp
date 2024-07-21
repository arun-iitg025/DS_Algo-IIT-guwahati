#include<iostream>
#include<string>
#include<fstream>
#include<dirent.h>
#include <bits/stdc++.h>

using namespace std;

class PriorityQueue{
private:
    int *arr;
    int capacity;
    int size = 0;
public:
    void setCapacity(int n){
        capacity = n;
        arr = new int(n);
    }

    int getSize(){
        return size;
    }

    int isFullQ(void){
        if(size == capacity)
            return 1;
        return 0;
    }
    
    int isEmptyQ(void){
        if(size==0)
            return 1;
        return 0;
    }

    void enQueue(int data){
        if(isFullQ()){
            cout<<"Queue is full."<<endl;
            return;
        }
        arr[size++] = data;
    }

    int deQueue(void){
        if(isEmptyQ()){
            cout<<"Queue is Empty."<<endl;
            exit(1);
        }
        int data=arr[0];
        for(int i=0;i<size;i++){
            arr[i] = arr[i+1];
        }
        size--;
        return data;
    }


    int getMax(void){
        if(isEmptyQ()){
            cout<<"Queue is Empty"<<endl;
            return INT_MIN;
        }
        return arr[0];
    }

    void printQ(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    

};

/*driver programm
int main(){
    PriorityQueue pq;
    pq.setCapacity(4);
    pq.enQueue(1);
    pq.printQ();
    pq.enQueue(3);
    pq.printQ();
    pq.enQueue(5);
    pq.printQ();
    pq.enQueue(7);
    pq.printQ();
    pq.printQ();
    pq.deQueue();
    pq.printQ();
    return 0;
}
//*/



int main(int argc,char *argv[]){
    DIR *input_directory;
    input_directory = opendir(argv[1]);
    if(input_directory == NULL){
        cout<<"No such directory exist"<<endl;
        exit(0);
    }
    struct dirent *entity;
    while((entity = readdir(input_directory)) != NULL){
        // cout<<entity->d_type<<" "<<entity->d_name<<endl;
        if(entity->d_name !=0){
            continue;
        }
        string path = argv[1];
        path = path + '/';
        path = path + entity->d_name;
        cout<<path<<endl;
        PriorityQueue pQueue;
        pQueue.setCapacity(10);
        // ofstream out;
        ifstream in;
        in.open(path);
        string st;
        while(in.eof()==0){
            getline(in,st);
            int i=0;
            cout << endl << st[i++];
            if(st[0] == '+'){
                pQueue.enQueue(stoi(st));
            }
            else if(st == "-"){
                int data = pQueue.deQueue();
            }
            else if(st == "max"){
                int max = pQueue.getMax();
            }
            else if(st == "?"){
                int size = pQueue.getSize();
                cout<<"the size of the queue is "<<size<<endl;
            }
        }
        pQueue.printQ();
        in.close();
    }

    return 0;
}