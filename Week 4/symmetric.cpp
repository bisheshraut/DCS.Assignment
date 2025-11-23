#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    cout << "Enter 9 elements for a 3x3 matrix: ";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    bool symmetric = true;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matrix[i][j] != matrix[j][i]){
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "Matrix is symmetric";
    else
        cout << "Matrix is not symmetric";
    
    return 0;
}
