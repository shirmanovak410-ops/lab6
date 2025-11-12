//
// Created by Ксения on 21.10.2025.
//
#include <iostream>
#include "lab5.h"
#include <vector>
int main() {
    std::vector <int> v = {2,0,-3,4,8,14,-59};
    plusesDeleter(v);
    for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
    return 0;
}
void plusesDeleter(std::vector<int> &v) {
    std::vector<int>::iterator it = v.begin();
    for (it;it != v.end(); it++) {
        if (*it > 0) {
            v.erase(it); --it;
        }
    }
}