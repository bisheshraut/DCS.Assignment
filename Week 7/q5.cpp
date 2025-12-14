#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* deleteValue(Node* head, int x) {
    if (!head) return head;

    if (head->data == x) {
        Node* t = head;
        head = head->next;
        delete t;
        return head;
    }

    Node* curr = head;
    while (curr->next && curr->next->data != x)
        curr = curr->next;

    if (!curr->next) return head;

    Node* t = curr->next;
    curr->next = t->next;
    delete t;

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
    Node* temp = NULL;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int v; cin >> v;
        Node* newNode = new Node{v, NULL};
        if (!head) head = temp = newNode;
        else temp->next = newNode, temp = newNode;
    }

    int x;
    cout << "Delete value: ";
    cin >> x;

    head = deleteValue(head, x);

    printList(head);
}
