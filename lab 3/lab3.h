#pragma once
#include <vector>
#include <string>


// task1
float mean(const std::vector<float>&);

// task2
std::pair<float, float> minMax(const std::vector<float>& input);

// task3
int argmax(const std::vector<float>& input);

// task4
std::vector<float> sort(std::vector<float>&);

// task5
bool remove_first_negative_element(std::vector<int>& input, int& removed_element);

// task6
std::string replace(const std::string& str, const std::string& old, const std::string& new_string);

// task7
std::vector<std::string> split(const std::string&, const char&);

// task8
std::string join(const std::vector<std::string>& input, const std::string& sep);