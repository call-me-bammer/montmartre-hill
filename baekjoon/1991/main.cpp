#include <iostream>
#include <unordered_map>
using namespace std;

// BST Node
struct Node {
  char data;
  Node* left;
  Node* right;

  Node(char value) : data(value), left(nullptr), right(nullptr) {}
};

void preorder(Node* node);
void inorder(Node* node);
void postorder(Node* node);

int main() {
  int n;
  cin >> n;

  // BST with unordered_map
  unordered_map<char, Node*> bst;

  for (int i = 0; i < n; i++) {
    char root, left, right;
    cin >> root >> left >> right;
    // build BST
    if (!bst.count(root)) {
      bst[root] = new Node(root);
    }
    if (left != '.') {
      if (!bst.count(left)) {
        bst[left] = new Node(left);
      }
      bst[root]->left = bst[left];
    }
    if (right != '.') {
      if (!bst.count(right)) {
        bst[right] = new Node(right);
      }
      bst[root]->right = bst[right];
    }
  }

  Node* rootNode = bst['A'];

  // print 3 traversal orders
  preorder(rootNode);
  cout << '\n';
  inorder(rootNode);
  cout << '\n';
  postorder(rootNode);
  cout << '\n';

  return 0;
}

void preorder(Node* node) {
  if (!node) return;
  cout << node->data;
  preorder(node->left);
  preorder(node->right);
}

void inorder(Node* node) {
  if (!node) return;
  inorder(node->left);
  cout << node->data;
  inorder(node->right);
}

void postorder(Node* node) {
  if (!node) return;
  postorder(node->left);
  postorder(node->right);
  cout << node->data;
}
