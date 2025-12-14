#include <iostream>
using namespace std;

#define SIZE 5
int cqueueArr[SIZE];
int front = -1;
int rear = -1;

bool isFull() { return (rear + 1) % SIZE == front; }

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is Full\n";
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    cqueueArr[rear] = value;
    cout << "Inserted: " << value << "\n";
}

int main() {
    int n, value;
    cout << "How many elements to insert: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        enqueue(value);
    }
    cout << "Queue: ";
    int i = front;
    while (i != rear) {
        cout << cqueueArr[i] << " ";
        i = (i + 1) % SIZE;
    }
    if (front != -1) cout << cqueueArr[rear];
    cout << "\n";
    return 0;
}
