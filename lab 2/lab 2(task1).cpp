#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int num[size];
    cout << "Enter " << size << " the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout << endl;
    cout << "Array after multiplying by 2: ";
    for (int i = 0; i < size; i++) {
        num[i] *= 2;
        cout << num[i]<< " ";
    }
    return 0;
}