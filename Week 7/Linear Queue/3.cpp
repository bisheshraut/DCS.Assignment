#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {10, 20, 30};
int front = 0;
int rear = 2;

bool isEmpty() {
    return front == -1 || front > rear;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Deleted: " << queueArr[front] << "\n";
    front++;
}

int main() {
    dequeue();
    cout << "Queue after deletion: ";
    for (int i = front; i <= rear; i++) cout << queueArr[i] << " ";
    cout << "\n";
    return 0;
}
