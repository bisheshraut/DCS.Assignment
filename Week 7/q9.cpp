#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertAfter(Node* head, int x, int y) {
    Node* curr = head;

    while (curr && curr->data != x)
        curr = curr->next;

    if (!curr) return head;

    Node* newNode = new Node{y, curr->next};
    curr->next = newNode;

    return head;
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

    int x, y;
    cout << "Insert Y after X.\nEnter X: ";
    cin >> x;
    cout << "Enter Y: ";
    cin >> y;

    head = insertAfter(head, x, y);

    printList(head);
}
