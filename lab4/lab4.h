#pragma once
#include <vector>
#include <string>
struct Student
{
    std::string Name;
    std::string GroupId;
    std::vector<unsigned> Ratings;
    std::vector<std::string> Subjects;
};
struct Group
{
    std::string Id;
    std::vector<Student> Students;
};
float mean (const std::vector<unsigned>&);
//задание 1
void SortByName(std::vector<Student>&);
//задание 2
void SortByRating(std::vector<Student>&);
//задание 3
size_t CountTwoness(const std::vector<Student>&);
//задание 4
size_t CountExcellent(const std::vector<Student>&);
//задание 5
std::vector<Student> VectorMathExcellent(const std::vector<Student>&);
//задание 6
std::vector<std::string> GroupsId(const std::vector<Student>&);
//задание 7
std::vector<Group> Groups(const std::vector<Student>&);