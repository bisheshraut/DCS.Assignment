#include <iostream>
using namespace std;

#define SIZE 5
int cqueueArr[SIZE] = {10, 20, 30};
int front = 0;
int rear = 2;

bool isEmpty() { return front == -1; }

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Deleted: " << cqueueArr[front] << "\n";
    if (front == rear) front = rear = -1;
    else front = (front + 1) % SIZE;
}

int main() {
    dequeue();
    cout << "Queue after deletion: ";
    if (front != -1) {
        int i = front;
        while (i != rear) {
            cout << cqueueArr[i] << " ";
            i = (i + 1) % SIZE;
        }
        cout << cqueueArr[rear];
    }
    cout << "\n";
    return 0;
}
