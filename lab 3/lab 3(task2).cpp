#include <iostream>
#include<vector>
#include "lab3.h"
int main()
{
    std::vector<float> arr{ 1,2,3,4,5,6,7,8 };
    std::cout << minMax(arr).first<<" "<<minMax(arr).second;
    return 0;
}
std::pair<float, float> minMax(const std::vector<float>& vec) {
    float Max = -100000, min = 1000000;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] > Max) Max = vec[i];
        if (vec[i] < min) min = vec[i];
    }
    std::pair<float, float> rez(min, Max);
    return rez;
}