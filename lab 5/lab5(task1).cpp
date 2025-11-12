//
// Created by Ксения on 20.10.2025.
//
#include <iostream>
#include <vector>
std::vector<int>::iterator Find(std::vector<int>::iterator first,std::vector<int>::iterator last,int el) {
    for (auto it = first; it != last; ++it) {
        if (*it == el) {
            return it;
        }
    }
    return last;
}
int main() {
    std::vector<int> v = {-2, 9, 1, 2, 6, 4, 5};
    int n = 0;
    std::cout<<"Element: "; std::cin>>n;
    std::vector<int>::iterator it = Find(v.begin(), v.end(), n);
    if (it != v.end()) {
        std::cout << "The element is found: " << *it << std::endl;
        std::cout << "Pozition: " << (it - v.begin()) << std::endl;
    }

    //Несуществующий элемент
    it = Find(v.begin(), v.end(), n);
    if (it == v.end()) {
        std::cout << "Element not found:(" << std::endl;
    }
    return 0;
}