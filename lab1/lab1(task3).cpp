#include <iostream>
int main()
{
    std::cout << "* 7: " <<std:: endl;
    for (int i = 1; i < 10; i++) {
        std::cout << i << " * 7 = " << i * 7 <<std:: endl;
    }
    std::cout <<std:: endl;
    int N;
    std::cout << " N: ";
    std::cin >> N;
    std::cout << "* N: " << std::endl;
    for (int j = 1; j < 10; j++) {
        std::cout << j << " * " << N << " = " << j * N << std::endl;
    }
    return 0;
}