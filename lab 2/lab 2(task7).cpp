#include <iostream>
#include <string>
using namespace std;
int main() {
    string city1, city2, city3;
    string the_longest, the_shortest;
    cout << "1st country: ";
    getline(cin, city1);
    cout << "2nd country: ";
    getline(cin, city2);
    cout << "3rd country: ";
    getline(cin, city3);
    the_longest = city1;
    if (city2.length() > the_longest.length()) {
        the_longest = city2;
    }
    if (city3.length() > the_longest.length()) {
        the_longest = city3;
    }
    the_shortest = city1;
    if (city2.length() < the_shortest.length()) {
        the_shortest = city2;
    }
    if (city3.length() < the_shortest.length()) {
        the_shortest = city3;
    }
    cout << "Long: " << the_longest << " " << the_longest.length() << endl;
    cout << "Short: " << the_shortest << " " << the_shortest.length() <<  endl;
    return 0;
}