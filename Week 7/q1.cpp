#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createFromArray(int arr[], int n) {
    if (n == 0) return NULL;
    Node* head = new Node{arr[0], NULL};
    Node* temp = head;

    for (int i = 1; i < n; i++) {
        temp->next = new Node{arr[i], NULL};
        temp = temp->next;
    }
    return head;
}

void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    Node* head = createFromArray(arr, n);

    cout << "Linked List: ";
    traverse(head);
}
