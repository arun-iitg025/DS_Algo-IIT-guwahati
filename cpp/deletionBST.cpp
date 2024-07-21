#include<iostream>
#include<queue>

using namespace std;
class Node{

public:

	int data;
	Node* left;
	Node* right;


	// cunstructor 

	Node(int data){

		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}

};
	
void inorder(Node *root){

	// base case
	if(root == NULL){
		return;

	}
	inorder(root->left);
	cout << root->data << "\t";
	inorder(root->right);

}

void preorder(Node* root){
	if(root == NULL){
		return;
	}

	cout << root->data <<"\t";
	preorder(root->left);
	preorder(root->right);

}

void postorder(Node* root){
	// base case
	if(root == NULL){
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout << root->data << "\t";
}

void levelOrdertraversal(Node* root){
	queue<Node*> q;
	q.push(root);					// dry run kar lo clear ho jayega
	q.push(NULL);

	while(!q.empty()){
		Node* temp = q.front();
		
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
Node* inserToBST(Node* root, int data){
	// base case

	if(root == NULL){
		root = new Node(data);
		return root;
	}

	// left part main add karna hai

	if(data < root->data){
		root->left = inserToBST(root->left, data);
	}
	else{
		root->right = inserToBST(root->right, data);
	}
	return root;
}

void takeInput(Node* &root){

	int data;
	cin >> data;

	while(data!=-1){
		root = inserToBST(root, data);
		cin >> data;
	}
}

Node* minVal(Node* root){
	Node* temp = root;

	while(temp->left != NULL){
		temp = temp->left;
	}
	return temp;
}

Node* maxVal(Node* root){
	Node* temp = root;
	while(temp->right != NULL){
		temp = temp->right;
	}
	return temp;
}
int succesInorder(Node* root){
	Node* temp = root;

	temp = temp->right;
	while(temp->left != NULL){
		temp = temp->left;
	}
	return temp->data;
}
int predInorder(Node* root){
	Node* temp = root;

	temp = temp->left;
	while(temp->right != NULL){
		
		temp = temp->right;
		
	}
	return temp->data;
}
Node* deleteToBST(Node* root, int val){

	// base case
	if(root == NULL){
		return root;
	}

	if(root->data == val){
		// jab 0 child ho
		if(root->left == NULL && root->right == NULL){
			delete root;
			return NULL;
		}

		// jab 1 child ho

		// left part mai

		if(root->left != NULL && root->right ==NULL){
			Node* temp = root->left;
			delete root;
			return temp;
		}

		// right part mai

		if(root->left == NULL && root->right !=NULL){
			Node* temp = root->right;
			delete root;
			return temp;
		}
		// jab 2 child ho 

		if(root->left != NULL && root->right != NULL){
			int mini = minVal(root->right)->data;
			root->data = mini;
			root->right = deleteToBST(root->right, mini);
			return root;
		}
	}
	else if(root->data > val){
		// left part main search karo

		root->left = deleteToBST(root->left, val);
		return root;
	}
	else{

		root->right = deleteToBST(root->right, val);
		return root;
	}	
}
int main(){

	Node* root = NULL;

	cout << "\nEnter the data for BST: ";
	takeInput(root);

	cout << "\nPrinting the BST " << endl;
	levelOrdertraversal(root);

	cout << endl << endl << " printing data inorder : " << endl;

	inorder(root);

	cout << endl << endl << " printing data preorder : " << endl;

	preorder(root);

	cout << endl << endl << " printing data postorder : " << endl;

	postorder(root);

	cout << endl << endl << "Minimum value is :" << minVal(root)->data << endl  << endl;

	cout << endl << endl << "Maximum value is :" << maxVal(root)->data << endl  << endl;

	cout << endl << endl << "Inorder Succesor value is :" << succesInorder(root) << endl  << endl;
	
	cout << endl << endl << "Inorder predecessor value is :" << predInorder(root) << endl  << endl;
	
	root = deleteToBST(root, 13);

	cout << "\nAfter deletion : " << endl << endl;

	cout << "\nPrinting the BST " << endl;
	levelOrdertraversal(root);

	cout << endl << endl << " printing data inorder : " << endl;

	inorder(root);

	return 0;
}