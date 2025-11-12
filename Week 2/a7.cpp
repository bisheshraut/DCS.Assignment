#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string word, longest = "";
    stringstream ss(sentence);

    while (ss >> word) {
        if (word.length() > longest.length())
            longest = word;
    }

    cout << "Longest word: " << longest << endl;
    return 0;
}
