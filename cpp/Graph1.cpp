#include<iostream>
#include<unordered_map>
#include<map>
#include<list>

using namespace std;
template <typename T> 

class graph{
    public:

    map<T, list<T>> Adj;

    void AddEdge(T u, T v, bool direction){
        Adj[u].push_back(v);
        if(direction ==0){
            Adj[v].push_back(u);
        }
    }
    void print(){
        cout <<"\nAdjlist are : "<< endl << endl;
        for(auto i:Adj){
            cout <<i.first << "-->";
            for(auto j:i.second){
                cout << j <<" , ";
            }
            cout << endl;
        }
        cout << endl;
    }
};
int main(){
        graph <char> g;

        int n,m;
        cout <<"\nEnter the no of Node: ";

        cin>>n;

        cout <<"\nEnter the no of Edges: ";
        cin>>m;

        char a, b;

        cout <<"\nEnter the egdes: " <<endl;
        
        for(int i=0; i<m; i++){
            cin >>a >>b;
            g.AddEdge(a, b, 0);
        }

        g.print();

        return 0;
}