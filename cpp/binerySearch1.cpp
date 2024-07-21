#include <iostream>
using namespace std;
template <class T>

class Node
{
public:
  T data;
  Node *left;
  Node *right;

  Node(T x)
  {
    data = x;
    left = NULL;
    right = NULL;
  }
};
template <class T>
class BinaryTree
{
public:
  Node<T> *root;

  BinaryTree()
  {
    root = NULL;
  }

  void addNode(int data)
  {
    Node<T> *newNode = new Node<T>(data);

    if (root == nullptr)
    {
      root = newNode;
    }
    else
    {
      Node<T> *focusNode = root;
      Node<T> *parent;

      while (true)
      {
        parent = focusNode;

        if (data < focusNode->data)
        {
          focusNode = focusNode->left;
          if (focusNode == nullptr)
          {
            parent->left = newNode;
            return;
          }
        }
        else
        {
          focusNode = focusNode->right;
          if (focusNode == nullptr)
          {
            parent->right = newNode;
            return;
          }
        }
      }
    }
  }

  void preOrderTraversal(Node<T> *focusNode)
  {
    if (focusNode != nullptr)
    {
      cout << focusNode->data << " ";
      preOrderTraversal(focusNode->left);
      preOrderTraversal(focusNode->right);
    }
  }
};

int main()
{
  BinaryTree<int> tree;

  int t;
  cin >> t;
  while (t--)
  {
    int data;
    cin >> data;
    tree.addNode(data);
  }
  tree.preOrderTraversal(tree.root);

  return 0;
}