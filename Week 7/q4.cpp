#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertBegin(Node* head, int val) {
    Node* newNode = new Node{val, head};
    return newNode;
}

void printList(Node* head) {
    while (head) cout << head->data << " ", head = head->next;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = NULL;
    Node* temp = NULL;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int v; cin >> v;
        Node* newNode = new Node{v, NULL};
        if (!head) head = temp = newNode;
        else temp->next = newNode, temp = newNode;
    }

    int x;
    cout << "Insert value at beginning: ";
    cin >> x;

    head = insertBegin(head, x);

    printList(head);
}
