#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double angle;
    
    cout << "Enter angle in radians: ";
    cin >> angle;
    
    double sineValue = sin(angle);
    double cosineValue = cos(angle);
    double tangentValue = tan(angle);
    
    double degrees = angle * 180 / M_PI;
    
    cout << fixed << setprecision(3);
    cout << "sin(" << degrees << "°) = " << sineValue << endl;
    cout << "cos(" << degrees << "°) = " << cosineValue << endl;
    cout << "tan(" << degrees << "°) = " << tangentValue << endl;
    
    return 0;
}