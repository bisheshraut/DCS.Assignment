#include <iostream>
using namespace std;

#define SIZE 5
int cqueueArr[SIZE];
int front = -1;
int rear = -1;

int main() {
    front = -1;
    rear = -1;
    cout << "Circular Queue Created Successfully with size " << SIZE << "\n";
    return 0;
}
