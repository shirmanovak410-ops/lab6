//
// Created by Ксения on 20.10.2025.
//
#include <iostream>
#include <vector>
#include "lab5.h"
int main() {
    std::vector<int> v = {1, 3, 9 , 4, 5,10,8};
    int n=0;
    std::cout<<"Element: "; std::cin>>n;
    std::vector<int>::iterator it = findInSorted(v.begin(), v.end(), n);
    std::cout << "Position: "<<std::distance(v.begin(),it) << std::endl;
    return 0;
}
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el) {
    while (*first<=el) {
        if (*first == el)
            return first;
        ++first;
    }
    return last;
}