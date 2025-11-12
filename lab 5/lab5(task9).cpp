//
// Created by Ксения on 21.10.2025.
//
#include <iostream>
#include <list>
#include <vector>
#include "lab5.h"
void Sort(std::list<int>& nums) {
    nums.sort([](int a, int b) {
        return a > b;
    });
}
void printList(const std::list<int>& nums) {
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        std::cout << *it;
        if (std::next(it) != nums.end()) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}
int main() {
    std::list<int> nums = {1, 5, 4, -3, 10};
    printList(nums);
    Sort(nums);
    printList(nums);
    return 0;
}