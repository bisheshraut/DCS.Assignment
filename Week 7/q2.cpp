#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int search(Node* head, int x) {
    int pos = 1;
    while (head != NULL) {
        if (head->data == x) return pos;
        head = head->next;
        pos++;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = NULL;
    Node* temp = NULL;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        Node* newNode = new Node{val, NULL};

        if (!head) head = temp = newNode;
        else temp->next = newNode, temp = newNode;
    }

    int x;
    cout << "Enter value to search: ";
    cin >> x;

    int pos = search(head, x);

    if (pos == -1) cout << "Element not found.";
    else cout << "Element found at position " << pos;
}
