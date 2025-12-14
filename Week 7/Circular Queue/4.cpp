#include <iostream>
using namespace std;

#define SIZE 5
int cqueueArr[SIZE] = {20, 30};
int front = 0;
int rear = 1;

bool isEmpty() { return front == -1; }

int main() {
    if (isEmpty()) cout << "Queue is Empty\n";
    else cout << "Front Element: " << cqueueArr[front] << "\n";
    return 0;
}
