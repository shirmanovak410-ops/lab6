//
// Created by Ксения on 09.10.2025.
//
#include <iostream>
#include <string>
#include "lab3.h"
int main() {
    std::string str, old_str, new_str;
    std::cout << "string = "; std::getline(std::cin,str);
    std::cout << "old string = "; std::getline(std::cin,old_str);
    std::cout << "new string = "; std::getline(std::cin,new_str);

    std::cout<< replace(str,old_str,new_str) << std::endl;
    return 0;
}
std::string replace(const std::string& str, const std::string& old, const std::string& new_string) {
    std::string rez=str;
    while (true) {
        if (rez.find(old)==rez.npos)
            break;
        int pos=rez.find(old);
        rez.erase(pos,old.length());
        rez.insert(pos,new_string);
    }
    return rez;
}