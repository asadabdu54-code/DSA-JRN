#include<iostream>

int main()
{
    std::cout << "Enter the number:\n" ;

    int n ;

    std::cin >> n ;

    if (n % 2 != 0 ) {
        std::cout << "Weird!!!\n";
    }

    else if (n % 2 == 0 && (n >= 2 && n <= 5)) {
         std::cout << "Not Weird!!!\n";
    }

    else if (n % 2 == 0 && (n >= 6 && n <= 20)) {
         std::cout << "Weird!!!\n";
    }

    else if (n % 2 == 0 && n > 20) {
         std::cout << "Not Weird!!!\n";
    }
}

