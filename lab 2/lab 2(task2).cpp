#include <iostream>
using namespace std;
int main() {
    const int size = 8;
    int num[size];
    cout << "Enter " << size << " array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout << endl;


    //сумма всех элементов массива
    int  summa = 0;
    for (int i = 0; i < size; i++) {
        summa += num[i];
    }
    cout << "Summa: " << summa << endl;
    //сумма квадратов элементов массива
    int  summacvadrat = 0;
    for (int i = 0; i < size; i++) {
        summacvadrat += num[i] * num[i];
    }
    cout << "Summa squared: " << summacvadrat << endl;
    //сумма шести первых элементов массива
    int summa6 = 0;
    for (int i = 0; i < size && i < 6; i++) {
        summa6 += num[i];
    }
    cout << "Summa first elements: " << summa6 << endl;
    //сумма элементов массива с k1-го по k2й;
    int k1, k2;
    cin >> k1 >> k2;

    if (k1 < 0 || k2 >= size || k1 > k2) {
        cout << "ERROR" << endl;
    }
    else {
        int sumkk = 0;
        for (int i = k1; i <= k2; i++) {
            sumkk += num[i];
        }
        cout << "summa elementov s " << k1 << " po " << k2 << " : " << sumkk << endl;
    }
    //среднее арифметическое всех элементов массива;
    int srarifm = 0;
    for (int i = 0; i < size; i++) {
        srarifm = summa / size;
    }
    cout << "sr arifm " << srarifm;
    //среднее арифметическое элементов массива с s1-го по s2-й.
    int s1, s2;
    cin >> s1 >> s2;
    if (s1 < 0 || s2> size || s1 > s2) {
        cout << "ERROR" << endl;
    }
    else {
        int srarifm1 = 0;
        int summa1 = 0;
        int size1 = s2 - s1 + 1;
        for (int i = s1; i <= s2; i++) {
            summa1 += num[i];
        }
        srarifm1 = summa1 / size1;


        cout << " sr arifm s " << s1 << " po " << s2 << " : " << srarifm1;
    }
    return 0;
}