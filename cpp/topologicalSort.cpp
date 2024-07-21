#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
#include<stack>
#include<vector>
#include<limits.h>

using namespace std;

class Graph{
public:
	unordered_map<int, list<pair<int, int>>> Adj;

	void addEdge(int u, int v, int weight){
		pair<int, int> p = make_pair(v, weight);

		Adj[u].push_back(p);
	}

	void Print(){
		for(auto i: Adj){
			cout <<i.first << "->";
			for(auto j:i.second){
				cout <<"(" <<j.first << "," << j.second << "),";
			}
			cout << endl << endl;
		}
	}
	void dfs(int node, unordered_map<int,bool> &visited, stack<int>&s){
		visited[node] = true;

		for(auto neighbour:Adj[node]){
			if(!visited[neighbour.first]){
				dfs(neighbour.first, visited, s);
			}
		}
		s.push(node);
	}

	void getSortedpath(int node,vector<int> &dist, stack<int> &s){
		dist[node] = 0;

		while(!s.empty()){
			int top = s.top();
			s.pop();

			if(dist[top] != INT_MAX){
				for(auto i: Adj[top]){
					if(dist[top] + i.second < dist[i.first]){
						dist[i.first] = dist[top] + i.second;
					}
				}
			}
		}
	}
};
int main(){
	Graph g;

	g.addEdge(0,1,5);
	g.addEdge(1,3,6);
	g.addEdge(2,3,7);
	g.addEdge(1,2,2);
	g.addEdge(0,2,3);
	g.addEdge(2,5,2);
	g.addEdge(4,5,-2);
	g.addEdge(2,4,4);
	g.addEdge(3,4,-1);
	g.Print();

	int n =6;

	// Topological Sort
	unordered_map<int, bool> visited;
	stack<int> s;

	for(int i=0; i<n; i++){
		if(!visited[i]){
			g.dfs(i, visited, s);
		}
	}

	int src = 1;
	vector<int> dist(n);

	for(int i=0; i<n; i++){
		dist[i] = INT_MAX;
	}

	g.getSortedpath(src, dist, s);

	cout << "\nAnswer are : " << endl << endl;

	for(int i=0; i<dist.size(); i++){
		cout << dist[i] << "\t";
	}
	cout << endl;


	return 0;
}