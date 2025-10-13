#include <iostream>
#include <string>
using namespace std;
int main() {
    string city;
    cout << "Country: ";
    getline(cin, city);
    int length = city.length();
    if (length % 2 == 0) {
        cout << "chetnoye kol-vo" << endl;
    }
    else {
        cout << "nechetnoye kol-vo" << endl;
    }

    return 0;
}