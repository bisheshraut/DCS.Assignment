#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch))
            result += ch;
    }

    cout << "String after removing non-alphabetic characters: " << result << endl;
    return 0;
}
