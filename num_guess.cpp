// Copyright (c) 2022 Immaculata HS All rights reserved.
// Created by: Tamer Zreg
// Created on: Oct 2022
// This program checks if a user's guess is correct.

#include <cstdlib>
#include <iostream>

int main() {
    // declaring the constant for the number the user has to guess
    const int RANDNUMBER = rand() % 9 + 1;

    int userGuess;

    // input, get the guess from the user
    std::cout << "Guess a number: ";
    std::cin >> userGuess;
    std::cout << "" << std::endl;

    // process, check if the user's guess matches the number
    // output string if statement is true
    if (userGuess == RANDNUMBER) {
        std::cout << "Your guess is correct!";
    }

    // process, check if the user's guess does not match the number
    // output string if statement is true
    if (userGuess != RANDNUMBER) {
        std::cout << "Your guess is wrong!";
        std::cout << " It was ";
        std::cout << RANDNUMBER;
    }
}
