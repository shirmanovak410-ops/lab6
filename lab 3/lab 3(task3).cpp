#include <vector>
#include <iostream>
#include "lab3.h"
int main() {
    std::vector<float> arr{ 1,2,3,4,5,6,7,8 };
    std::cout << argmax(arr) << std::endl;
    return 0;
}
int argmax(const std::vector<float>& vec) {
    if (vec.empty()) //empty - пуста ли строка
        return -1;
    int index, max = -1000;
    for (int i = 0; i < vec.size(); i++)
        if (vec[i] > max) {
            index = i; max = vec[i];
        }
    return index;
}