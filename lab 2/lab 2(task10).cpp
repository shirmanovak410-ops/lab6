#include <iostream>
#include <string>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    string sentence;
    cout << "Predl: ";
    getline(cin, sentence);
    int numbers = 0;
    int countA = 0;
    for (char a : sentence) {
        if (isalpha(a)) { // isalpha - проверяет, является ли аргумент алфавитным символом
            numbers++;
            if (tolower(a) == 'a') { //tolower - символ в строчный эквивалент (учитывает и строчную и заглавную функцию)
                countA++;
            }
        }
    }
    double dola = 0.0;
    if (numbers > 0) {
        dola = (static_cast<double>(countA) / numbers) * 100;
    }
    cout << "Predl: \"" << sentence << "\"" << endl;
    cout << "Kol-vo: " << numbers << endl;
    cout << "Kol-vo 'a': " << countA << endl;
    cout << "Dola 'a': " << dola << "%" << endl;
    return 0;
}