// largestOfThree.cpp
// CIT 66 Spring 2025
// Created by Mark Edmunds
// Created on 2-4-2025
/* The program determines the largest of three entered integers.
There are three different functions with the name largestOfThree.
They each demonstrate different ways I thought of to solve this problem.
To call the 'while loop' version call with largestOfThree(getIntFromTheUser())
The 'if else' version call with no arguments
The recursive version call with two arguments
 */


#include <iostream>
#include <string>
#include  <climits>

using namespace std;
// getAnIntFromTheUser from funWithFunctions
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
 int largestOfThree(int i, const int num) {
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
    int option = 0;
    // show largestOfThree option menu
    while (option == 0) {
        cout <<
            "There are three different options for getting the largest of three integers"
            "\n1) While loop\n2) If else\n3) Recursion\n4) Exit"
        << endl;
        cin >> option;
        // using switch instead of if else, else if
        switch (option) {
            case 1:
                cout << "The largest of the three is: " + to_string(largestOrThree(getAnIntFromTheUser())) << endl;
                option = 0;
                break;
            case 2:
                cout << "The largest of the three is: " + to_string( largestOfThree()) << endl;
                option = 0;
                break;
            case 3:
                cout << "The largest of the three is: " + to_string(largestOfThree(1, num)) << endl;
                option = 0;
                break;
            case 4:
                cout << "Goodbye" << endl;
                return 0;
            default:
                cout << option + " is not a valid options";
                break;
        }
    }
}