#include <iostream>
#include <vector>
#include "lab3.h"

int main()
{
    std::vector<float> arr{ 1,47,9,4,5,9,2,0 };
    arr=sort(arr);
    for (int i = 0; i < arr.size(); i++) std::cout << arr[i] << " ";
    return 0;
}
std::vector<float> sort(std::vector<float>& vec) {
    int swaps=1;
    while (swaps != 0){
        swaps = 0;
        for (int i = 0; i < vec.size() - 1; i++) {
            if (vec[i] < vec[i + 1]) {
                std::swap(vec[i], vec[i + 1]); swaps++;
            }
        }
    }
    return vec;
}