// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program squares all numbers from 0 to the user_input

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // This function squares all numbers from 0 to the given integer
    std::string userInputString;
    int userInput;

    // input
    std::cout << "Enter an integer >= 0: ";
    std::cin >> userInputString;

    // process & output
    try {
        userInput = std::stoi(userInputString);

        // this checks if it is actually an integer
        if (userInput == std::stof(userInputString)) {
            if (userInput >= 0) {
                for (int counter = 0; counter <= userInput; counter++) {
                    std::cout << counter << "² = " << pow(counter, 2) <<
                    std::endl;
                }
            } else {
                std::cout << "You did not enter a positive integer.";
            }
        } else {
            std::cout << "You did not enter an integer." << std::endl;
        }
    } catch(...) {
        std::cout << "You did not enter an integer." << std::endl;
    }

    std::cout << "\nDone.";
}
