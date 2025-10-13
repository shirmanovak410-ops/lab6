#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    int m, n;
    cout << "Slovo: ";
    cin >> word;
    cout << "m and n: ";
    cin >> m >> n;
    if (m < 1 || n > word.length() || m > n) {
        cout << "ERROR!" << endl;
    }
    string substring = word.substr(m-1 , n - m + 1);
    cout << "Ish slovo: " << word << endl;
    cout << "S " << m << " po " << n << " bykvy: " << substring << endl;
    return 0;
}