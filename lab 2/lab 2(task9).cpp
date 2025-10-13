#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cout << "Slovo: ";
    cin >> word;
    int N = word.length();
    string stars(N, '*');
    string result = stars + word + stars;
    cout << "Result: " << result << endl;
    return 0;
}