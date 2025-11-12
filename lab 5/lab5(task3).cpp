//
// Created by Ксения on 20.10.2025.
//
#include <iostream>
#include <string>
#include "lab5.h"
int main() {
    int words = wordsCounter("can you can, can  ");
    std::cout << words;
    return 0;
}
int wordsCounter(const std::string& str) {
    std::string::const_iterator it= str.begin();
    int count = 0;
    int words_amount=0;
    for (it;it!=str.end();it++) {
        if (*it == ' ' || *it == ',' || *it == '.') {
            if (count!=0)
                words_amount++;
            count=0;
        }
        else count++;
    }
    if (count!=0) words_amount++;
    return words_amount;
}