#include <iostream>
using namespace std;

int main() {
    // 1. Произведение всех целых чисел от 8 до 15
    int product1 = 1;
    for (int i = 8; i <= 15; i++) {
        product1 *= i;
    }
    cout << "* 8  15: " << product1 << endl;

    // 2. Произведение всех целых чисел от a до 20
    int a;
    cout << "a (1 < a < 20): ";
    cin >> a;

    // Проверка корректности ввода
    if (a <= 1 || a >= 20) {
        cout << "ENTER" << endl;
        return 1;
    }

    int product2 = 1;
    for (int i = a; i <= 20; i++) {
        product2 *= i;
    }
    cout << "ot " << a << " do 20: " << product2 << endl;

    // 3. Произведение всех целых чисел от 1 до b
    int b;
    cout << " b (1 < b < 20): ";
    cin >> b;

    // Проверка корректности ввода
    if (b <= 1 || b >= 20) {
        cout << "ENTER" << endl;
        return 1;
    }

    int product3 = 1;
    for (int i = 1; i <= b; i++) {
        product3 *= i;
    }
    cout << "ot 1 do " << b << ": " << product3 << endl;

    // 4. Произведение всех целых чисел от a до b
    int a2, b2;
    cout << "a and b (b >= a): ";
    cin >> a2 >> b2;

    // Проверка корректности ввода
    if (b2 < a2) {
        cout << "ENTER" << endl;
        return 1;
    }

    int product4 = 1;
    for (int i = a2; i <= b2; i++) {
        product4 *= i;
    }
    cout << "* ot " << a2 << " do " << b2 << ": " << product4 << endl;

    return 0;
}