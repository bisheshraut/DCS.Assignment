#include <iostream>
using namespace std;

#define SIZE 5
int cqueueArr[SIZE] = {20, 30, 40};
int front = 0;
int rear = 2;

bool isEmpty() { return front == -1; }

int main() {
    if (isEmpty()) cout << "Queue is Empty\n";
    else {
        cout << "Queue: ";
        int i = front;
        while (i != rear) {
            cout << cqueueArr[i] << " ";
            i = (i + 1) % SIZE;
        }
        cout << cqueueArr[rear];
        cout << "\n";
    }
    return 0;
}
