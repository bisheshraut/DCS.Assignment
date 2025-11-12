#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    cin >> str;

    for (char ch : str) {
        char c = tolower(ch);
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
            result += ch;
    }

    cout << "String after removing vowels: " << result << endl;
    return 0;
}
