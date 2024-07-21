#include<iostream>
using namespace std;

class TrieNode{
public:

	char data;
	TrieNode* children[26];
	bool isTerminal;


	TrieNode(char ch){
		data = ch;
		for(int i=0; i<26; i++){
			children[i] = NULL;
		}
		isTerminal = false;
	}
};

class Trie{
public:
	TrieNode* root;

	Trie() {
		root = new TrieNode('\0');
	}

	void insertUtil(TrieNode* root, string word){
		//base case
		if(word.length() == 0){
			root->isTerminal = true;
			return;
		}

		// asumption, word will be in CAPS 
		int index = word[0]-'A';
		TrieNode* child;

		//present	aage badh jana hai
		if(root->children[index] != NULL){
			child = root->children[index];
		}
		else{
			//absent new node banake aage badh jana hai
			child = new TrieNode(word[0]);
			root->children[index] = child;
		}


		//recursion
		insertUtil(child, word.substr(1));	// yahan child and word ke aage wala char jayega 
	}


	void insertWord(string word){

		insertUtil(root, word);

	}

	// ELEMENT KO SEARCH KARNA HAI

	bool searchUtil(TrieNode* root, string word){
		// base case
		if(word.length() == 0){
			return root->isTerminal;
		}
		int index = word[0] - 'A';
		TrieNode* child;

		//present
		if(root->children[index] != NULL){
			child = root->children[index];
		}
		else{
			//absent 
			return false;
		}

		//recursion
		return searchUtil(child, word.substr(1));		// word ke aage char ko send kar diya pehle char ko chor kar
	}

	bool searchWord(string word){
		return searchUtil(root, word);
	}
};

int main(){

	Trie *t = new Trie();

	t->insertWord("ARM");
	t->insertWord("DO");
	t->insertWord("TIME");

	cout << "\nPresent or Not : " << t->searchWord("TIMER") << endl;
	return 0;
}

