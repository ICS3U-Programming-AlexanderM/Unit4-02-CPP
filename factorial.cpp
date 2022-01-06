// Copyright (c) 2022 Alexander Matheson All rights reserved.

// Created by: Alexander Matheson
// Created on: Jan 6, 2022
// This program asks the user for a positive integer. It
// then calculates the factorial of that number.
#include <iostream>

int main() {
    // declare the loop, user number and factorial vars
    int loop = 0;
    int factorial = 1;
    std::string numberString;
    int userNumber;

    // get the user number as a string
    std::cout << "Enter your number: ";
    std::getline(std::cin, numberString);
    std::cout << std::endl;

    // error checking
    try {
        userNumber = std::stoi(numberString);
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, must be an integer";
        return 0;
    }

    // check if number is equal to or greater than 0
    if (userNumber < 0) {
        std::cout << "Number must be equal to or greater than 0";
        return 0;
    }

    // calculate the factorial of user number
    do {
        loop = loop + 1;
        factorial = factorial * loop;
        std::cout << "Tracking " << loop << " times through the loop.\n";
    } while (loop < userNumber);

    // display the factorial to the user
    std::cout << "\nThe factorial of " << userNumber
    << " is " << factorial << std::endl;
}
