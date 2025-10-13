#include <iostream>
#include <string>
#include <vector>
#include "lab3.h"
int main() {
    std::string str;
    char sep_symb;
    std::cout<<"string = "; std::getline(std::cin, str);
    std::cout << "separate symbol = "; std::cin.get(sep_symb);
    std::vector<std::string> rez = split(str, sep_symb);
    for (int i = 0; i < rez.size(); i++) {
        std::cout << rez[i] << std::endl;
    }
    return 0;
}
std::vector<std::string> split(const std::string& string, const char& sep) {
    std::string part = "";
    std::vector <std::string> result;
    for (int i = 0; i < string.length(); i++) {
        if (string[i] == sep) {
            result.push_back(part);
            part = "";
            continue;
        }
        part+=string[i];
        if (i == string.length()-1) result.push_back(part);
    }
    return result;
}
