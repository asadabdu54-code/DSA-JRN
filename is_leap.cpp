#include<iostream>

 bool is_leap(int year)
 { 
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ;
}

int main ()
{
    std::cout << "Enter the year to test: \n" ;
    int year_val {};
    std::cin >> year_val ;

    std::cout << is_leap( year_val ) << '\n' ;
    return 0 ;
}