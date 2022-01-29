#include <iostream>
#include <stdio.h>

int main () {

    std::cout << "Welcome to the calculator!" << std::endl;


//int это целое число
//double это рациональное (то есть любое, дробное!!!)

    int status = 0;

    do {
        double a; 
        std::cout << "Please, enter a: ";
        std::cin >> a;

        double b;
        std::cout << "Please, enter b: ";
        std::cin >> b;

        std::cout << "a + b = " << a + b << std::endl;
        std::cout << "a - b = " << a - b << std::endl;
        std::cout << "a * b = " << a * b << std::endl;
        std::cout << "a : b = " << a / b << std::endl << std::endl;

        std::cout << "Do you want to leave? Yes(1), No(0):";
        std::cin >> status;

    } while (status == 0);
    

    std::cout << "Goodbye!" << std::endl;
    
    return 0;

};