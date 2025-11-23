#include <iostream>
using namespace std;

int sumArray(int a[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++)
        s += a[i];
    return s;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << sumArray(arr, n);
    return 0;
}
