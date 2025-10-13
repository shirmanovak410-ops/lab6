#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username1, username2;
    cout << "Username 1: ";
    getline(cin, username1);
    cout << "Usarname 2: ";
    getline(cin, username2);
    int length1 = username1.length();
    int length2 = username2.length();
    if (length1 > length2) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}