#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE];
int front = -1;
int rear = -1;

bool isFull() {
    return rear == SIZE - 1;
}

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is Full\n";
        return;
    }
    if (front == -1) front = 0;
    rear++;
    queueArr[rear] = value;
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
    for (int i = front; i <= rear; i++) cout << queueArr[i] << " ";
    cout << "\n";
    return 0;
}
