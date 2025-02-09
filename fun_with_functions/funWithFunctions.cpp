// funWithFunctions.cpp
// CIT 66 Spring 2025
// Created by Mark Edmunds
// Created on 2-4-2025
// The program uses three function one to get an int from the user another to compare ints and a third to sum them.

#include <iostream>
#include <string>

using namespace std;

// function definitions
int getAnIntFromTheUser(){
    int userInput;
    cout << "Enter a number: " << endl;
    cin >> userInput;
    return userInput;
}

bool compareTwoInts() {
    return (getAnIntFromTheUser() == getAnIntFromTheUser());
}

int sumTwoInts(const int num1, const int num2) {
    return num1 + num2;
}


int main() {
    int const number = getAnIntFromTheUser();
    cout << "You entered the number: " << number << endl;

    if (compareTwoInts()) {
        cout << "The integers are equal" << endl;
    }else {
        cout << "The integers are not equal" << endl;
    }
    const int sum = sumTwoInts(getAnIntFromTheUser(), getAnIntFromTheUser());
    cout << "The sum of the integers is: " + to_string(sum) << endl;
    return 0;
}