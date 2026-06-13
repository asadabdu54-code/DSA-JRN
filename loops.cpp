#include<iostream>

int main()
{
    std::cout << "Enter the Number:\n" ;
    int n ;
    std::cin >> n ;

    if (n >= 0){
    for (int i = 0 ; i < n ; i++){
     std::cout << "The value is : " << i * i << "\n";
    }
}

}