#include<iostream>

int main()
{
    std::cout << "Enter The 1st Number:\n";

    int num1;

    std::cin >> num1 ;

    std::cout << "Enter The 2nd Number:\n";

    int num2;

    std::cin >> num2 ;

    std::cout << "The sum of the Numbers is: " << num1 + num2 << std::endl;
    std::cout << "The d/c of the Numbers is: " << num1 - num2 << std::endl;
    std::cout << "The product of the Numbers is: " << num1 * num2 << std::endl;
    }