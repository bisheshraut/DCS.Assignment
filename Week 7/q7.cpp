#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr) {
        Node* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

void printList(Node* head) {
    while (head) cout << head->data << " ", head = head->next;
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

    head = reverseList(head);
    printList(head);
}
