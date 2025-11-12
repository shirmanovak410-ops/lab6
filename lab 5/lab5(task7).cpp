//
// Created by Ксения on 21.10.2025.
//
#include <iostream>
#include <list>
#include <ostream>
#include "lab5.h"
int main() {
    std::list<int> nums = {1, 5,-4, 2, -3};
    reverseNum(nums);
    std::list<int>::iterator it=nums.begin();
    for (it;it!=nums.end();it++){
        std::cout << *it << " ";
}
    return 0;
}
void reverseNum(std::list<int>& nums) {
    std::list<int>::iterator it=nums.begin();
    for (it;it!=nums.end();++it) {
        nums.insert(it,-(*it));
    }
}