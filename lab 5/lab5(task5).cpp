//
// Created by Ксения on 21.10.2025.
//
#include "lab5.h"
#include <vector>
#include <string>
#include <set>
#include <iostream>
std::vector<std::string> uniqueWords(const std::string& str) {
    std::vector<std::string> res;
    auto it = str.begin();
    std::set<std::string> words;
    std::string current_word;
    for (; it != str.end(); ++it) {
        if (*it == ',' || *it == '.' || *it == ' ') {
            if (!current_word.empty()) {
                words.insert(current_word);
                current_word.clear();
            }
        }
        else {
            current_word += *it;
        }
    }
    if (!current_word.empty()) {
        words.insert(current_word);
    }
    return std::vector<std::string>(words.begin(), words.end());
}
int main() {
    std::vector<std::string> words = uniqueWords("banan, apple, APPLE cherry /kiwi apple");
    for (auto &i: words) {
        std::cout << i << std::endl;
    }
}
