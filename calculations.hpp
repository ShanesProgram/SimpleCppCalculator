//calculations.hpp
#ifndef CALCULATIONS_HPP
#define CALCULATIONS_HPP

#include "inputHandling.hpp"
using namespace std;

class Calculations{
    public:
    inputHandling inputHandler;
    Calculations(){
        inputHandler.userInput();
        switch(inputHandler.operation){
            case '+':
                std::cout << "Your answer is:";
                std::cout << inputHandler.firstNumber + inputHandler.secondNumber;
                break;
            case '-':
                std::cout << "Your answer is:";
                std::cout << inputHandler.firstNumber - inputHandler.secondNumber;
                break;
            case '*':
                std::cout << "Your answer is:";
                std::cout << inputHandler.firstNumber * inputHandler.secondNumber;
                break;
            case '/':
                if (inputHandler.secondNumber != 0){
                    std::cout << "Your answer is:";
                    std::cout << inputHandler.firstNumber / inputHandler.secondNumber;
                }
                else{
                    std::cout << "That equation is impossible to solve, please try again.";
                }
                break;

        }
    }
};


#endif