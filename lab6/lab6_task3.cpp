//
// Created by Ксения on 16.11.2025.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

enum Score
{
    Unsatisfactorily = 2,
    Satisfactorily,
    Good,
    Excellent
};

struct Student
{
    std::string Name;
    int Year;
    std::map<std::string, Score> RecordBook;
};

// в качестве ключа - название группы
// в качестве значения - список студентов
using Groups = std::map<std::string, std::vector<Student>>;

void saveToFile(const std::string& filename, const Groups& groups);
void loadFromFile(const std::string& filename, Groups& outgroups);

int main() {
    // Новые студенты с разными специальностями и оценками
    Student student1 = {
        "Alexandra Petrova",
        2003,
        {{"English", Excellent}, {"Phisics", Good}, {"Math", Excellent}, {"PE", Good}}
    };

    Student student2 = {
        "Dmitry Volkov",
        2004,
        {{"English", Satisfactorily}, {"Physics", Satisfactorily}, {"Math", Good}, {"PE", Unsatisfactorily}}
    };

    Student student3 = {
        "Ekaterina Smirnova",
        2003,
        {{"English", Excellent}, {"Physics", Excellent}, {"Math", Excellent}, {"PE", Excellent}}
    };
    Groups groups = {
        {"IU2-14", {student1, student2}},
        {"SM7-13", {student3}}
    };
    Groups outgroups;
    std::string filename;

    std::cout << "Enter filename to save data in: ";
    std::getline(std::cin, filename);
    saveToFile(filename, groups);

    std::cout << "Enter filename to get data from: ";
    std::getline(std::cin, filename);
    loadFromFile(filename, outgroups);

    std::cout << "Enter filename to save loaded data in (for verification): ";
    std::getline(std::cin, filename);
    saveToFile(filename, outgroups);
    return 0;
}

void saveToFile(const std::string& filename, const Groups& groups) {
    std::ofstream fout(filename);
    if (!fout.is_open()) {
        std::cout << "ERROR: Cannot open file '" << filename << "' for writing!" << std::endl;
        return;
    }
    int groupCounter = 0;
    for (auto groupIt = groups.begin(); groupIt != groups.end(); groupIt++) {
        fout << "Group " << ++groupCounter << std::endl;
        fout << groupIt->first << std::endl;  // Название группы
        fout << std::endl;

        for (int i = 0; i < groupIt->second.size(); i++) {
            fout << "Student " << i + 1 << ":" << std::endl;
            fout << groupIt->second[i].Name << std::endl;
            fout << groupIt->second[i].Year << std::endl;

            for (auto subjectIt = groupIt->second[i].RecordBook.begin();
                 subjectIt != groupIt->second[i].RecordBook.end(); subjectIt++) {
                fout << subjectIt->first << " " << subjectIt->second << std::endl;
            }
            fout << std::endl;
        }
        fout << std::endl << std::endl;
    }
    fout.close();
}
void loadFromFile(const std::string& filename, Groups& outgroups) {
    std::ifstream fin(filename);
    if (!fin.is_open()) {
        std::cout << "ERROR: Cannot open file '" << filename << "' for reading!" << std::endl;
        return;
    }
    Student currentStudent = {};
    std::vector<Student> currentGroupStudents;
    std::string currentGroupName;
    std::string line;
    std::string firstWord;
    int numericValue;

    while (std::getline(fin, line)) {
        if (!line.empty()) {
            std::istringstream iss(line);
            iss >> firstWord;

            if (firstWord == "Group") {
                // Сохраняем предыдущую группу если есть данные
                if (!currentStudent.Name.empty()) {
                    currentGroupStudents.push_back(currentStudent);
                }
                if (!currentGroupStudents.empty()) {
                    outgroups[currentGroupName] = currentGroupStudents;
                }
                std::getline(fin, line);
                currentGroupName = line;
                currentGroupStudents.clear();
                currentStudent = {};
            }
            else if (firstWord == "Student") {
                if (!currentStudent.Name.empty()) {
                    currentGroupStudents.push_back(currentStudent);
                }
                currentStudent = {};
                std::getline(fin, line);
                currentStudent.Name = line;
                std::getline(fin, line);
                currentStudent.Year = std::stoi(line);
                currentStudent.RecordBook.clear();
            }
            else {
                iss >> numericValue;
                currentStudent.RecordBook[firstWord] = static_cast<Score>(numericValue);
            }
        }
    }
    if (!currentStudent.Name.empty()) {
        currentGroupStudents.push_back(currentStudent);
    }
    if (!currentGroupStudents.empty()) {
        outgroups[currentGroupName] = currentGroupStudents;
    }
    fin.close();
}