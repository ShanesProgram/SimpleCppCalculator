#ifndef INPUTHANDLING_HPP
#define INPUTHANDLING_HPP
#include <iostream>
using namespace std;

class inputHandling{
    public:
        int firstNumber;
        int secondNumber;
        char operation;
        
        void userInput(){
            std::cout << "First Number:";
            std::cin >> firstNumber;
            std::cout << "\n";

            std::cout << "Operation:";
            std::cin >> operation;
            std::cout << "\n";

            std::cout << "Second Number:";
            std::cin >> secondNumber;
            std::cout << "\n";
        }

};

#endif