// largestOfThree.cpp
// CIT 66 Spring 2025
// Created by Mark Edmunds
// Created on 2-4-2025
// The program determines the largest of three entered integers


#include <iostream>
#include <string>
#include  <climits>

using namespace std;
// getAnIntFromTheUser from funWithFunctions
int getAnIntFromTheUser(){
    int userInput;
    cout << "Enter a number: " << endl;
    cin >> userInput;
    return userInput;
}

// // while loop implementation
int largestOrThree(const int num ) {
    int largest = 0;
    int i = 1;
    while (i < 3 ) {
        i++;
        const int userInput = getAnIntFromTheUser();
        largest = (num > userInput) ? num : userInput;
    }
    return largest;
}
// if statement implementation
int largestOfThree() {

    int largest = 0;
    const int num1 = getAnIntFromTheUser();
    const int num2 = getAnIntFromTheUser();
    const int num3 = getAnIntFromTheUser();

    if (num1 > num3) {
        largest = (num1 > num2) ? num1 : num2;
    }else {
        largest = (num3 > num2) ? num3 : num2;
    }
    return largest;
}

// largestOfThree recursive
 int largestOfThree(const int i, const int num) {
    // get user input
    const int num1 = getAnIntFromTheUser();
    // set largest
    const int largest = (num1 > num) ? num1 : num;
    // check for base case i = 3
    return (i < 3) ? largestOfThree(i + 1, largest) : largest;
}

int main() {
    // create initial num value
    constexpr int num = INT_MIN;
    // output largest of three ints
    // there are three different functions with the name largestOfThree.
    // They each demonstrate different ways I thought of to solve this problem
    // To call the 'while loop' version call with largestOfThree(getIntFromTheUser())
    // The 'if else' version call with no arguments
    // The recursive version call with two arguments
    cout << "The largest of the three is: " + to_string(largestOfThree(1,num)) << endl;


    return 0;
}