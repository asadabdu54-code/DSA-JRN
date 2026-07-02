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

    std::cout <<"The result as integer is: " << result << std::endl;

     double sec_result = static_cast<double>(num1) / num2 ;
    std::cout <<"The result as double is: " << sec_result << std::endl;
    

}