#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, remainder;
    
    cout << "Enter a number: ";
    cin >> num;
    
    int original = num;
    
    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    
    cout << "Reversed number: " << reversed << endl;
    
    return 0;
}