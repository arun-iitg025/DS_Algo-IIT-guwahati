#include<bits\stdc++.h>
#include<fstream>
#include<iostream>
#include<vector>
#include<map>

using namespace std;
#define v 6

int selectMinVertex(vector<int>& value, vector<bool>& setMST){
	int min = INT_MAX;
	int vertex;
	for(int i=0; i<v; i++){
		if(setMST[i] == false && value[i] < min){
			vertex = i; 

			min = value[i];
		}
	}
	return vertex;
}
void findMST(int graph[v][v], vector<int> &ans){

	int parent[v];
	vector<int> value(v, INT_MAX);
	vector<bool> setMST(v, false);

	parent[0] = -1;
	value[0] = 0;

	for(int i=0; i<v-1; i++){
		//step.1 find mini
		int u = selectMinVertex(value, setMST);

		//step.2 mark true
		setMST[u] = true;

		//Adjecency list ko traverse karna hai jo visited nahi hai
		for(int j=0; j<v; j++){
			//1. edge present in the graph
			//2. vertex j is not include in MST
			//3. edge weight is smaller than current edge weight
			if(graph[u][j]!=0 && setMST[j] == false && graph[u][j]<value[j]){

				value[j] = graph[u][j];
				parent[j] = u;
			}
		}

	}
	for(int i=1; i<6; i++){
		ans.push_back(graph[parent[i]][i]);
	}

	//print MST
	//for(int i=1; i<v; i++){
	//	cout << "u -> v : " << parent[i] <<" - " << i << " wt " <<graph[parent[i]][i] << endl;
	//}
}
int main(int argc, char* argv[])
{
	
	ifstream fin;
	ifstream fin1;
	fin.open("inputMST.txt");
	fin1.open("outputMST.txt");
	int  k1;
	fin >>  k1;
	int graph[6][6];
	vector<int> ans;
    // no of verteces are 6
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			fin >>k1;
			graph[i][j] = k1;
		}
	}
	/*for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			
			cout << graph[i][j] << " ";
		}
		cout << endl;
	}*/

	findMST(graph, ans);	
	int val;
	cout << "\nTestcases : " <<endl << endl;
	for(int i=0; i<5; i++){
		fin1>>val;
		cout << ans[i] << " " << val << endl;
		if(ans[i] != val){
			cout << "\nError !!!" << endl;
			break;
		}
	}
	cout << "\nSuccessful" << endl << endl;
    fin.close();
	return 0;
}

//TIME COMPLEXITY: O(V^2