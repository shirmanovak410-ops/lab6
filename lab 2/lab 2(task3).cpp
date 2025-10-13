#include <iostream>
using namespace std;
int main()
{
    const int size = 20;
    int num[size];
    for (int i = 0; i < size; i++) {
        num[i] = i + 1;
    }
    for(int i = 0; i < 3; i++) {
        int num1 = num[i];
        num[i] = num[size - 3 + i];
        num[size - 3 + i] = num1;
    }
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    return 0;
}