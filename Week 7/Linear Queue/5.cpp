#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {20, 30};
int front = 0;
int rear = 1;

bool isEmpty() {
    return front == -1 || front > rear;
}

void display() {
    if (isEmpty()) cout << "Queue is Empty\n";
    else {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) cout << queueArr[i] << " ";
        cout << "\n";
    }
}

int main() {
    display();
    return 0;
}
