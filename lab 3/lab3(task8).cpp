//
// Created by Ксения on 09.10.2025.
//
#include <iostream>
#include <string>
#include <vector>
#include "lab3.h"

int main() {
    std::vector<std::string> arr = {"Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?"};
    std::string sep;
    std::cout << "Separate symbol = "; std::getline(std::cin,sep);

    std::cout<<join(arr,sep);
    return 0;
}
std::string join(const std::vector<std::string>& array, const std::string& sep) {
    std::string rez="";
    for (int i = 0; i < array.size(); i++) {
        if (i == array.size()-1)
            rez += array[i];
        else
            rez += array[i] + sep;
    }
    return rez;
}