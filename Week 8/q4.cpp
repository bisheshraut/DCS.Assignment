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

Node* iterativeInsert(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);

    Node* parent = nullptr;
    Node* curr = root;

    while (curr != nullptr) {
        parent = curr;
        if (key < curr->data)
            curr = curr->left;
        else if (key > curr->data)
            curr = curr->right;
        else
            return root;
    }

    if (key < parent->data)
        parent->left = new Node(key);
    else
        parent->right = new Node(key);

    return root;
}

int main() {
    Node* root = nullptr;
    root = iterativeInsert(root, 10);
    root = iterativeInsert(root, 7);
    root = iterativeInsert(root, 15);

    cout << "Insertion completed";
    return 0;
}
