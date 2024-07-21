#include<iostream>
#include<dirent.h>
#include<unordered_map>
#include<map>
#include<list>
#include<queue>
#include<fstream>
#include<string.h>
#include<algorithm>
#include<ctime>

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

int main(int argc, char *argv[]){
	DIR *d;

	struct dirent *dir;

	d=opendir(argv[1]);

	

	int n = atol("inputBFS");
    cout<<d<<endl;
	if(d){
		while((dir=readdir(d))!=NULL){
		string s= dir->d_name;
		if(s!="." && s!=".."){
			string str = "/";
			ifstream myfile("InputBFS");
			int size;

			myfile>>size;
	
			int arr[size];
			for(int i=0; i<size; i++){
				myfile>>arr[i];
                cout << i << endl;
			}


                for(int i= size/2-1; i>=0; i--){
			
			    //    Heapify(arr, size, i);
			
				}

			 //   HeapSort(arr, size);
			for(int i=0; i<size; i++){
				cout << arr[i] <<"\t";
						
			}
			ifstream yourfile(argv[2]+str+s);
			for(int i=0; i<size; i++){
				int key;
				yourfile>>key;

				if(key != arr[i]){
				cout <<endl <<"wrong "<<endl;
				return 0;
				}				
			}
			cout << endl << "success" << endl;

		}
		}
	}
	else{
		cout << endl << "File not opening : "<< endl;
	}
	return 0;
}
