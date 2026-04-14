#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int data) { // constructor
    this->data = data;
    left = right = NULL;
  }
};

static int idx = -1;
Node *buildTree(vector<int> nodes) {
  idx++;
  if (nodes[idx] == -1) {
    return NULL;
  }

  Node *currNode = new Node(nodes[idx]);
  currNode->left = buildTree(nodes); // recursively calling tomake left subtree
  currNode->right =
      buildTree(nodes); // recursively calling tomake right subtree

  return currNode;
}

void preorder(Node *root) {
  if (root == NULL)
    return;
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

int main() {
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

  Node *root = buildTree(nodes);

//   cout << "\nroot : " << root->data << "\n";

    preorder(root);
    cout<<"\n";
  return 0;
}
