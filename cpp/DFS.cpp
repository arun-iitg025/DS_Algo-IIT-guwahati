// DFS  implimentation Using stack
#include<iostream>
#include<fstream>
#include<unordered_map>
#include<map>
#include<list>
#include<vector>
#include<stack>
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
void DFS(int node, unordered_map<int, bool> &visited, map<int, list<int>> &Adj, vector<int> &ans){
    stack<int> st;
    st.push(node);
    visited[node] = true;

    while(!st.empty()){
        int frontNode = st.top();
        st.pop();
        ans.push_back(frontNode);
        for(auto i:Adj[frontNode]){
            if(!visited[i]){
                st.push(i);
                visited[i] = true;
            }
        }
    }


}
int main(int argc, char* argv[]){

    ifstream fin;
    ifstream fin1;

    fin.open("inputDFS.txt");
    fin1.open("outputDFS.txt");
    graph g;
    map<int, list<int>> Adj;
    vector<int> ans;
    unordered_map<int, bool> visited;
    int n;
  //  cout << "\nEnter the node:";
    fin >> n;
    int m;
 //   cout <<"\nEnter the no.of edges : ";
    fin >> m;

     int u,v;
     for(int i=0; i<m; i++){
        fin >> u >> v;
        g.AddEdge(Adj,u, v, 0);

     }
    // g.printAdj(Adj);
   
    for(int i=1; i<=n; i++){
        if(!visited[i]){
           // vector<int> component;

           DFS(i, visited, Adj, ans);
          
        }
    }

    cout <<"\nTestcases : "<<endl << endl;
    int k;
    for(int i=0; i<n; i++){
        fin1 >>k;
        if(ans[i] != k){
            cout <<"\nError !!!"<<endl;
                return 1;

        }
        cout<< ans[i] <<" -- > "<< k << endl;
    }
    cout << "\nSuccessfull " <<endl <<endl;
    cout <<"\nThank you "<<endl <<endl;
 //   cout <<"\nDFS are : " << endl << endl;
    

 /*  for(int i=0; i<n; i++){
      
        cout << ans[i] <<" ";
    }
    */
    fin.close();
     return 0;
}