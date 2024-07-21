// BFS implimentation
#include<iostream>
#include<fstream>
#include<unordered_map>
#include<map>
#include<list>
#include<queue>
using namespace std;

class graph{
    public:
    //map<int, list<int>> Adj;

    void AddEdge(map<int, list<int>> &Adj, int u, int v, bool direction){

        Adj[u].push_back(v);
        if(direction == 0){
            Adj[v].push_back(u);

        }
    }

    void printAdj(map<int, list<int>> &Adj){
        for(auto i:Adj){
            cout << i.first << "-->  ";
            for(auto j:i.second){
                cout << j << " , ";
            }
            cout<<endl;

        }
    }
};
void BFS(map<int, list<int>> &Adj,unordered_map<int, bool> &visited, vector<int>&ans, int node){
   queue<int> q;
   q.push(node);
   visited[node] = 1;
   while(!q.empty()){
    int frontNode = q.front();
    q.pop();
    ans.push_back(frontNode);

    //traverse all neighbour
    for(auto i:Adj[node]){
        if(!visited[i]){
            q.push(i);
            visited[i] = 1;

        }
    }

   }

}
int main(int argc, char* argv[]){

    ifstream fin;
    ifstream fin1;
    fin1.open("outputBFS.txt");
    fin.open("inputBFS.txt");

    graph g;
    map<int, list<int>> Adj;
    vector<int> ans;
    unordered_map<int, bool> visited;
    int n;
    //cout << "\nEnter the node:"<<endl;
    fin >> n;
    int m;
    //cout <<"\nEnter the no.of edges : "<<endl;
    fin >> m;

     int u,v;
     for(int i=0; i<m; i++){
        fin >> u >> v;
        g.AddEdge(Adj,u, v, 0);

     }

     
   //  g.printAdj(Adj);
    
    for(int i=1; i<n; i++){
        if(!visited[i]){
            BFS(Adj, visited, ans, i);
        }
    }
  //  cout <<"\nBFS are : " << endl << endl;
    int k;
    cout <<"\nTestcases : "<<endl<<endl;
    for(int i=0; i<5; i++){
        fin1 >>k;
        if(ans[i] !=k){
            cout <<"\nError !!!!"<<endl;
            return 1;
        }
            cout << ans[i] <<" --> " << k << endl;
        
    }
    cout <<"\nSuccessfull"<< endl<< endl;
    cout <<"\nThank you"<<endl <<endl;
fin.close();
/*
    for(int i=0; i<5; i++){
        cout <<ans[i]<<endl;
    }*/
     return 0;
}