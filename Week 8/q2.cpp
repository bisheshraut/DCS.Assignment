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

Node* iterativeSearch(Node* root, int key) {
    while (root != nullptr) {
        if (root->data == key)
            return root;
        else if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}

int main() {
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(25);

    int key = 25;
    if (iterativeSearch(root, key))
        cout << "Key found";
    else
        cout << "Key not found";

    return 0;
}
