#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

static int idx = -1;
Node *buildTree(vector<int> nodes) {

  idx++;
  // base cars
  if (nodes[idx] == -1) {
    return NULL;
  }

  Node *currNode = new Node(nodes[idx]);

  currNode->left = buildTree(nodes);
  currNode->right = buildTree(nodes);

  return currNode;
}

void preOrder(Node *root) {
  // base case
  if (root == NULL)
    return;

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(Node *root) {
  if (root == NULL)
    return;
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}
void postOrder(Node *root) {
  if (root == NULL)
    return;
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

int main() {

  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
  Node *root = buildTree(nodes);

  cout << "PreOrder : ";
  preOrder(root);
  cout << endl;
  cout << "PostOrder : ";

  postOrder(root);
  cout << endl;
  cout << "inOrder : ";

  inOrder(root);
}
