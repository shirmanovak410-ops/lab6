//
// Created by Ксения on 20.10.2025.
//
#include <iostream>
#include <map>
#include <string>
#include <cctype>
std::map<std::string, int> wordsMapCounter(const std::string& text) {
    std::map<std::string, int> wordCount;
    std::string currentWord;
    for (char c : text) {
        if (c != ' ' && c != ',' && c != '.') {
            currentWord += std::tolower(c);
        } else {
            if (!currentWord.empty()) {
                wordCount[currentWord]++;
                currentWord.clear();
            }
        }
    }
    if (!currentWord.empty()) {
        wordCount[currentWord]++;
    }
    return wordCount;
}
int main() {
    std::map<std::string, int> words = wordsMapCounter("can you can");
    for (const auto& pair : words) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    std::cout << "words[\"can\"] = " << words["can"] << std::endl;
    std::cout << "words[\"you\"] = " << words["you"] << std::endl;
    return 0;
}