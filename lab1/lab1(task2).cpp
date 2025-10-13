#include <iostream>

int main()
{
    std::pair<unsigned short, unsigned short> posA, posB;
    std::cout << "position A\n"; std::cin >> posA.first >> posA.second;
    std::cout << "position B\n"; std::cin >> posB.first >> posB.second;
    if (posA.first > 0 && posA.second > 0 && posB.first > 0 && posB.second > 0 && posA.first < 9 && posA.second < 9 && posB.first < 9 && posB.second < 9) {
        //условие ладьи
        bool task1 = (posA.first == posB.first) || (posA.second == posB.second);
        //условие слона
        bool task2 = std::abs(posA.first - posB.first) == std::abs(posA.second - posB.second);
        //условие короля
        bool task3 = std::abs(posA.first - posB.first)<=1 && std::abs(posA.second - posB.second)<=1;
        //условие ферзя
        bool task4 = task2 || task1;
        //условие пешки
        bool task5 = (posB.second - posA.second) == 1 && std::abs(posA.first - posB.first) <= 1;
        std::cout << task1 << " " << task2 << " " << task3 << " " << task4 << " "<< task5 << std::endl;
    }
    else std::cout << "Invalid data";
    return 0;
}