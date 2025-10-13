#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence = "Can you can a can as a canner can can a can?";
    string old = "can";
    string neww = "new_word";
    cout <<  sentence << endl;
    int pos = 0;
    while ((pos = sentence.find(old, pos)) != string::npos) {
        bool isWordStart = (pos == 0 || !isalpha(sentence[pos - 1]));
        bool isWordEnd = (pos + old.length() == sentence.length() ||
            !isalpha(sentence[pos + old.length()]));

        if (isWordStart && isWordEnd) {
            sentence.replace(pos, old.length(), neww);
            pos += neww.length();
        }
        else {
            pos += old.length();
        }
    }
    cout <<  sentence << endl;
    return 0;
}