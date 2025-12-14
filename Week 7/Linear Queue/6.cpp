#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {10, 20, 30, 40, 50};
int front = 0;
int rear = 4;

bool isFull() { return rear == SIZE - 1; }
bool isEmpty() { return front == -1 || front > rear; }

int main() {
    if (isFull()) cout << "Queue is Full\n";
    else if (isEmpty()) cout << "Queue is Empty\n";
    else cout << "Queue is neither Full nor Empty\n";
    return 0;
}
