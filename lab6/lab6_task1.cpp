//
// Created by Ксения on 12.11.2025.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
void saveToFile(const std::string&, const std::vector<std::string>&);
void loadFromFile(const std::string&, std::vector<std::string>&);
int main() {
    std::vector<std::string> data = {"I", "study", "in", "BMSTU"};
    std::vector<std::string> outData;
    std::string filename;

    std::cout << "Enter filename to save data in: ";
    std::getline(std::cin, filename);
    saveToFile(filename, data);

    std::cout << "Enter filename to get data from: ";
    std::getline(std::cin, filename);
    loadFromFile(filename, outData);
    for (auto it = outData.begin(); it != outData.end(); it++)
        std::cout << *it << std::endl;
    return 0;
}
void saveToFile(const std::string& filename, const std::vector<std::string>& data) {
    std::ofstream fout(filename);
    if (!fout.is_open()) {
        std::cout << "Error: Cannot open file for writing: " << filename << std::endl;
        return;
    }
    for (size_t i = 0; i < data.size(); i++) {
        if (i == data.size() - 1)
            fout << data[i];
        else
            fout << data[i] << " ";
    }
    fout.close();
}
void loadFromFile(const std::string& filename, std::vector<std::string>& outData) {
    std::ifstream fin(filename);
    if (!fin.is_open()) {
        std::cout << "Error: Cannot open file for reading: " << filename << std::endl;
        return;
    }
    std::string word;
    while (fin >> word) {
        outData.push_back(word);
    }
    fin.close();
}