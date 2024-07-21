#include<iostream>
#include<queue>

using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;

	}
};
node* create(node* root){

	cout << "Enter the data : " << endl;

	int data;
	cin >> data;
	root = new node(data);

	if(data == -1){
		return NULL;
	}

	cout << "\nEnter the data for inserting in the left of: "<< data << endl;
	root->left = create(root->left);
	cout << "\nEnter the data for inserting in the right of: " << data << endl;
	root->right = create(root->right);
	return root;

}

void levelOrdertraversal(node* root){
	queue<node*> q;
	q.push(root);					// dry run kar lo clear ho jayega
	q.push(NULL);

	while(!q.empty()){
		node* temp = q.front();
		
		q.pop();

		if(temp == NULL){		// purana level complete ho chuka hai
			cout << endl;
			if(!q.empty()){		// queue still has some child
				q.push(NULL);
			}
		}
		else{
			cout << temp->data << "\t";
			if(temp->left){
				q.push(temp->left);
			}

			if(temp->right){
				q.push(temp->right);
			}
		}
		
	}
}
void inorder(node* root){
	// base case
	if(root == NULL){
		return;
	}

	inorder(root->left);
	cout << root->data << "\t";
	inorder(root->right);
}

void preorder(node* root){
	// base case
	if(root == NULL){
		return;
	}

	cout << root->data << "\t";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node* root){
	// base case
	if(root == NULL){
		return;
	}

	
	postorder(root->left);
	postorder(root->right);
	cout << root->data << "\t";
}

int main(){
	node* root = NULL;

	// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

	// creating a tree
	root = create(root);

	cout << "\nIneorder traversel is : ";
	inorder(root);

	cout << endl << endl;

	cout << "\nPreorder traversel is : ";
	preorder(root);

	cout << endl << endl;

	cout << "\nPostorder traversel is : ";
	postorder(root);

	cout << "\nPrinting the level ordered traversel : " << endl;
	levelOrdertraversal(root);

	return 0;
}