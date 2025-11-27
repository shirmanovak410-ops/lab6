//
// Created by Ксения on 16.11.2025.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
struct Book
{
    std::string Author;
    std::string Title;
    int Year;
};
void saveToFile(const std::string&, const std::vector<Book>&);
void loadFromFile(const std::string&, std::vector<Book>&);
int main() {
    Book book1 = {
        "J.K. Rowling",
        "Harry Potter and the Philosopher's Stone",
        1997
    };
    Book book2 = {
        "Agatha Christie",
        "Murder on the Orient Express",
        1934
    };
    Book book3 = {
        "Stephen King",
        "The Shining",
        1977
    };
    std::vector<Book> data{book1, book2, book3};
    std::vector<Book> outdata;
    std::string filename;

    std::cout << "Enter filename to save data in: ";
    std::getline(std::cin, filename);
    saveToFile(filename, data);

    std::cout << "Enter filename to get data from: ";
    std::getline(std::cin, filename);
    loadFromFile(filename, outdata);

    for (auto it = outdata.begin(); it != outdata.end(); it++) {
        std::cout << "Author: " << it->Author << std::endl;
        std::cout << "Title:  " << it->Title << std::endl;
        std::cout << "Year:   " << it->Year << std::endl;
    }
    return 0;
}
void saveToFile(const std::string& filename, const std::vector<Book>& data) {
    std::ofstream fout(filename);
    if (!fout.is_open()) {
        std::cout << "ERROR: Cannot open file '" << filename << "' for writing!" << std::endl;
        return;
    }
    for (auto it = data.begin(); it != data.end(); it++) {
        fout << it->Author << std::endl
             << it->Title << std::endl
             << it->Year << std::endl
             << std::endl;
    }
    fout.close();
}
void loadFromFile(const std::string& filename, std::vector<Book>& outData) {
    std::ifstream fin(filename);
    if (!fin.is_open()) {
        std::cout << "ERROR: Cannot open file '" << filename << "' for reading!" << std::endl;
        return;
    }
    Book book;
    std::string line;
    short fieldCounter = 0;  // 0 - автор, 1 - название, 2 - год
    while (std::getline(fin, line)) {
        if (!line.empty()) {
            switch (fieldCounter % 3) {
                case 0:
                    book.Author = line;
                    break;
                case 1:
                    book.Title = line;
                    break;
                case 2:
                    book.Year = std::stoi(line);
                    outData.push_back(book);
                    book = {};
                    break;
            }
            fieldCounter++;
        }
    }
    fin.close();
}