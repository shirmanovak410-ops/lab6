//
// Created by Ксения on 21.10.2025.
//
#include <vector>
#include <string>
#include <unordered_set>
#include <iostream>
int diffWordsCounter(const std::string& str) {
    auto it = str.begin();
    std::unordered_set<std::string> words;
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
    return words.size();
}
int main() {
    int words = diffWordsCounter("banan, apple cherry banan, kiwi");
    std::cout << words << std::endl;
}