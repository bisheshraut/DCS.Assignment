#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* findMin(Node* root) {
    if (root == nullptr || root->left == nullptr)
        return root;
    return findMin(root->left);
}

Node* findMax(Node* root) {
    if (root == nullptr || root->right == nullptr)
        return root;
    return findMax(root->right);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(30);

    cout << "Min: " << findMin(root)->data << endl;
    cout << "Max: " << findMax(root)->data << endl;

    return 0;
}
