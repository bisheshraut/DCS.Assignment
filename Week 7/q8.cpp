#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int countNodes(Node* head) {
    int c = 0;
    while (head) c++, head = head->next;
    return c;
}

int main() {
    int n;
    cout << "Enter nodes: ";
    cin >> n;

    Node* head = NULL;
    Node* t = NULL;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int v; cin >> v;
        Node* node = new Node{v, NULL};
        if (!head) head = t = node;
        else t->next = node, t = node;
    }

    cout << "Total nodes: " << countNodes(head);
}
