#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* deletePos(Node* head, int pos) {
    if (!head) return head;

    if (pos == 1) {
        Node* t = head;
        head = head->next;
        delete t;
        return head;
    }

    Node* curr = head;
    for (int i = 1; i < pos - 1 && curr; i++)
        curr = curr->next;

    if (!curr || !curr->next) return head;

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
        Node* node = new Node{v, NULL};
        if (!head) head = temp = node;
        else temp->next = node, temp = node;
    }

    int pos;
    cout << "Delete position: ";
    cin >> pos;

    head = deletePos(head, pos);
    printList(head);
}
