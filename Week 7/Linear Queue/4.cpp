#include <iostream>
using namespace std;

#define SIZE 5
int queueArr[SIZE] = {20, 30};
int front = 0;
int rear = 1;

bool isEmpty() { return front == -1 || front > rear; }

int main() {
    if (isEmpty()) cout << "Queue is Empty\n";
    else cout << "Front Element: " << queueArr[front] << "\n";
    return 0;
}
