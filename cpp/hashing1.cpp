#include<iostream>
#include<string>
using namespace std;

struct Node{
    int data;
    Node *next = NULL;
};



class hashTable{

private:
    Node* arr[10] = {0};

    void add_to_the_table(int index,Node* node){
        if(arr[index] == nullptr){
            arr[index] = node;
            return;
        }
        Node* temp = arr[index];
        arr[index] = node;
        node->next = temp;
    }


    void  delete_from_the_table(int index,int data){
        if(arr[index]==nullptr){
            cout<<"No data found:"<<endl;
            return;
        }
        Node* curr;
        Node* prev;

        prev = arr[index];

        if(prev->data==data){
            arr[index] = prev->next;
            free(prev);
        }
        prev = arr[index];

        while(prev->next){
            curr = prev->next;
            if(curr->data == data){
                prev->next = curr->next;
                free(curr);
                continue;
            }
            prev = prev->next;
            if(prev==nullptr){
                break;
            }
        }
        cout<<"\nEnd of delete function"<<endl;
    }


    void print(void){
        for(int i=0;i<10;i++){
            Node* temp = arr[i];
            while(temp){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }


public:

    int getIndex(int data){
        return data%10;
    }

    // insert function
    void insert(int data){
        int index = getIndex(data);
        Node* node = new Node;
        node->data = data;

        add_to_the_table(index,node);
    }


    void delet(int data){
        int index = getIndex(data);
        delete_from_the_table(index,data);
    }


    void show(void){
        print();
    }

};



int main(){


    hashTable hs;
    hs.insert(222123001);
    hs.insert(222123001);
    hs.insert(222123001);
    hs.insert(222123002);
    hs.insert(222123003);
    hs.insert(222123004);
    hs.insert(222123005);
    hs.insert(222123006);
    hs.insert(222123007);
    hs.insert(222123008);
    hs.insert(222123009);
    hs.insert(222123010);
    hs.insert(222123011);
    hs.insert(222123012);
    hs.insert(222123013);
    hs.insert(222123014);
    hs.insert(222123015);
    hs.insert(222123016);
    hs.insert(222123017);
    hs.insert(222123018);
    hs.insert(222123019);
    // hs.show();
    hs.insert(222123020);
    hs.insert(222123021);
    hs.insert(222123022);
    hs.insert(222123023);
    hs.insert(222123024);
    hs.insert(222123025);
    hs.insert(222123026);
    hs.insert(222123027);
    hs.insert(222123028);
    hs.insert(222123029);
    hs.insert(222123030);
    hs.insert(222123031);
    hs.insert(222123032);
    hs.insert(222123033);
    hs.insert(222123034);
    hs.insert(222123035);
    hs.insert(222123036);
    hs.insert(222123037);
    hs.insert(222123038);
    hs.insert(222123039);
    hs.insert(222123040);
    hs.insert(222123041);
    hs.insert(222123042);
    hs.insert(222123043);
    hs.insert(222123044);
    hs.insert(222123045);
    hs.insert(222123046);
    hs.insert(222123047);
    hs.insert(222123048);
    hs.insert(222123049);
    hs.insert(222123050);
    hs.insert(222123051);
    hs.insert(222123052);
    hs.insert(222123053);
    hs.insert(222123054);
    hs.insert(222123055);
    hs.insert(222123056);
    hs.insert(222123057);
    hs.insert(222123058);
    hs.insert(222123059);
    hs.insert(222123060);

    hs.show();

    hs.delet(222123001);

    hs.show();

    hs.delet(222123049);

    hs.show();

    cout<<"Ended"<<endl;
    return 0;
}