#include<iostream>

int main()
{
    std::cout <<"Enter the first number.\n";

    int num1;

    std::cin >>num1 ;

    std::cout <<"Enter the second number.\n";

    int num2;

    std::cin >>num2 ;

    int result = num1 / num2 ;

    std::cout <<"The result with integer variable is: " << result << std::endl;

    std::cout <<"The result with floating point variable is: 3" << (float)num1/num2 << std::endl;
    

}