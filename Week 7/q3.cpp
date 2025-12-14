#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node{val, NULL};

    if (head == NULL) return newNode;

    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;

    temp->next = newNode;
    return head;
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
    cout << "Insert value at end: ";
    cin >> x;

    head = insertEnd(head, x);
    printList(head);
}
