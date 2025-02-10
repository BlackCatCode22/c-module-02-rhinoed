// funWithFunctions.cpp
// CIT 66 Spring 2025
// Created by Mark Edmunds
// Created on 2-4-2025
// The program uses three function one to get an int from the user another to compare ints and a third to sum them.

#include <iostream>
#include <string>
#include <climits>
#include <limits>

using namespace std;

// function definitions

int getAnIntFromTheUser(){
    int userInput;
    // input validation
    while (true) {
        cout << "Enter a number: " << endl;
        cin >> userInput;
        if (cin.fail()) {
            constexpr int max = INT_MAX;
            // Clear the error flag
            cin.clear();
            // Discard bad input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid integer less than " << max - 1 << ".\n";
        }else {
            return userInput;
        }
    }
}

bool compareTwoInts(const int num1, const int num2) {
    return (num1 == num2);
}

int sumTwoInts(const int num1, const int num2) {
    constexpr int max = INT_MAX;
    return (num1 + num2) < max ? num1 + num2 : num1;
}


int main() {
    // get integers
    int const num1 = getAnIntFromTheUser();
    cout << "You entered the number: " << num1 << endl;
    cout << "getting next number... " << endl;
    int const num2 = getAnIntFromTheUser();
    // compare integers
    cout << "comparing integers..." << endl;
    cout << (compareTwoInts(num1, num2) ? "The integers are equal" : "The integers are not equal") << endl;
    // summing two integers
    cout << "summing integers..." << endl;
    cout << "The sum of " + to_string(num1) + " and " + to_string(num2) + " is: " + to_string(sumTwoInts(num1,num2)) << endl;
    return 0;
}