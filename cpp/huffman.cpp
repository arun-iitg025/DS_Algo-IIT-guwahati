#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node* right;
    
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
        
    }
};
class cmp{
    public:
    bool operator()(node* a, node*b){
        return a->data > b->data;
        
    }
};

void traversel(node* root, vector<string> &ans, string temp){
    if(root->left == NULL && root->right == NULL){
        ans.push_back(temp);
        return;
    }
    traversel(root->left, ans, temp+'0');
    traversel(root->right, ans, temp+'1');
    
}

void huffmanCodes(string S,vector<int> f,int N, vector<string>& ans)
{
    priority_queue<node*, vector<node*>, cmp> pq;
    
    for(int i=0; i<N; i++){
        node* temp = new node(f[i]);
        pq.push(temp);
    }
    while(pq.size() > 1){
        node* left = pq.top();
        pq.pop();
        
        node*right = pq.top();
        pq.pop();
        
        node* newnode = new node(left->data + right->data);
        newnode->left = left;
        newnode->right = right;
        pq.push(newnode);
        
    }
    
    node *root = pq.top();
    
      string temp = "";
    traversel(root, ans, temp);

}

int main(int argc, char* argv[]){

    ifstream fin;
    ifstream fin1;

    fin.open("inputHuff.txt");
    fin1.open("outputHuff.txt");



	string S;
    getline(fin,S);
    vector<int> f;
    int n = sizeof(S);
    int val;
    for(int i=0; i<n; i++){
        fin>>val;
        f.push_back(val);
    }
 
    int size = S.size();
    vector<string> ans;

	huffmanCodes(S, f, size, ans);

    cout << "\nTestcases : "<< n   << " "<< size <<endl << endl;
    string key;
   for(int i=0; i<size;i++){
        fin1>>key;
        cout << ans[i] << "\t" << key <<endl;
        if(ans[i] != key){
            cout << "\nError !!"<<endl;
            return 1;
        }
    }
    cout << "\nSuccessful" << endl<< endl;


	
 	cout <<"\nOur Huffman Encoding are: " <<endl;
 	
 	/*for(auto i:ans){

 		cout << i<< endl;
 	}*/

 	return 0;
	
}