#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    do {
        num = num / 10;
        count++;
    } while(num != 0);
    
    cout << "Number of digits: " << count << endl;
    
    return 0;
}