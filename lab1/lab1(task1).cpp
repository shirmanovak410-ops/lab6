#include <iostream>
using namespace std;
int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;
    bool group = (
        // каждое из чисел X и Y нечетное
        (X % 2 == 1 && Y % 2 == 1) ||

        // только одно из чисел X и Y меньше 20
        ((X < 20 && Y >= 20) || (X >= 20 && Y < 20)) ||

        // хотя бы одно из чисел X и Y равно нулю
        (X == 0 || Y == 0) ||

        // каждое из чисел X, Y, Z отрицательное
        (X < 0 && Y < 0 && Z < 0) ||

        // только одно из чисел X, Y и Z кратно пяти
        ((X % 5 == 0 && Y % 5 != 0 && Z % 5 != 0) ||
            (X % 5 != 0 && Y % 5 == 0 && Z % 5 != 0) ||
            (X % 5 != 0 && Y % 5 != 0 && Z % 5 == 0)) ||

        // хотя бы одно из чисел X, Y, Z больше 100
        (X > 100 || Y > 100 || Z > 100)
        );
    if (group) {
        cout << "condition is true" << endl;
    }
    else {
        cout << "condition is false" << endl;
    }
    return 0;
}
