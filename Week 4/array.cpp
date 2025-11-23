#include <iostream>
using namespace std;

int main() {
    int arr[2][3];
    int sum = 0;

    cout << "Enter 6 elements for a 2x3 array: ";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }

    cout << "Sum = " << sum << endl;
    return 0;
}
