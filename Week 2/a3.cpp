#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[26] = {0};
    for (char ch : str) {
        ch = tolower(ch);
        if (isalpha(ch))
            freq[ch - 'a']++;
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << (char)(i + 'a') << ":" << freq[i] << "  ";
    }
    cout << endl;

    return 0;
}
