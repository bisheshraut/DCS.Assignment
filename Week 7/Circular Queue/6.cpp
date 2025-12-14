#include <iostream>
using namespace std;

#define SIZE 5
int cqueueArr[SIZE] = {10, 20, 30, 40, 50};
int front = 0;
int rear = 4;

bool isFull() { return (rear + 1) % SIZE == front; }
bool isEmpty() { return front == -1; }

int main() {
    if (isFull()) cout << "Queue is Full\n";
    else if (isEmpty()) cout << "Queue is Empty\n";
    else cout << "Queue is neither Full nor Empty\n";
    return 0;
}
