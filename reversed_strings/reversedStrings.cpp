// reversedString.cpp
// CIT 66 Spring 2025
// Created by Mark Edmunds
// Created on 2-4-2025
// The program reverse an entered string

#include <iostream>
#include <string>

using namespace std;


int main() {
    // setup
    string userString;
    string reversedString;
    // prompt user
    cout << "Enter your string: " << endl;
    // read line
    getline(cin, userString);
    // get length of string
    string::size_type const length = userString.size();
    // loop over string in reverse
    for ( unsigned int i = length; i > 0; i--) {
        // append to string
        reversedString.append(1, userString[i - 1]);
    }
    // output
    cout << reversedString << endl;
    return 0;
}