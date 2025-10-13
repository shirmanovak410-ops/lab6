#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "razmer massiva: ";
    cin >> size;
    int* num = new int[size];
    cout << "Vvedite " << size << " elementov massiva: ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout << "Massiv: ";
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    int otric = -1;
    for (int i = 0; i < size; i++) {
        if (num[i] < 0) {
            otric = i;
            break;
        }
    }
    if (otric != -1) {
        for (int i = otric; i < size - 1; i++) {
            num[i] = num[i + 1];
        }
        size--;
        for (int i = 0; i < size; i++) {
            cout << num[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Otric elementov net" << endl;
    }


    int chet = -1;
    for (int i = 0; i < size; i++) {
        if (num[i] % 2 == 0) {
            chet = i;
        }
    }

    if (chet != -1) {
        for (int i = chet; i < size - 1; i++) {
            num[i] = num[i + 1];
        }
        size--;
        for (int i = 0; i < size; i++) {
            cout << num[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Chet elementov net" << endl;
    }
    delete[] num;
    return 0;
}