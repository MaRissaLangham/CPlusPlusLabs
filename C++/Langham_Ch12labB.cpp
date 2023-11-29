// Author: Marissa Langham
// Assignment Number: Chapter 12 Lab B: 
// File Name: Langham_Ch10labB.cpp
// Course/Section: COSC 1337
// Date Started: 11.28.23
// Date Completed: 11.28.23
// Instructor: Sravan Kumpati
// Description: Case Manipulator: Manipulates a string to uppercase, lowercase, or flips the 
// case depending on user input.
// Program Pass Test? Yes
// Program Meet Requirements? Yes
//*********************************************************************************************

/*
Directions:

    Write a program with three functions:  upper, lower, and flip. Each function should accept 
    a C-string as an argument. The upper function should step through all the characters in the 
    string, converting each to uppercase. The lower function, should step through all the 
    characters in the string converting, each to lowercase. The flip steps through the string,
    testing each character to determine whether it is upper or lowercase. If upper, it should 
    convert to lower. If lower, it should convert to upper. The main function should accept one 
    string from the user, then pass it to each of the functions.  

Sample Output:

    Output: 
    Original:
    Uppercase:
    Lowercase
    Flipped:
*/

/*
I will abide by the ACC Honor code and answer these following
questions with full integrity and honesty, I understand if I answer
"False" to any of these questions, I will receive zero for this assignemnt.
 
1. My submission is my own work.
2. I promise not to share my work with anyone in any form.
3. I did not use any outside tools to complete the Lab assignment.
*/

#include <iostream>
#include <cstring>
using namespace std;

// Function Prototypes
void upper(char[]);
void lower(char[]);
void flip(char[]);


int main() {
    const int MAX_SIZE = 100;
    char inputString[MAX_SIZE];

    // Accept a string from the user
    cout << "Welcome to the Case Manipulator" << endl;
    cout << "Enter a sentence: ";
    cin.getline(inputString, MAX_SIZE);

    // Display the original string
    cout << "Original: " << inputString << endl;

    // Make a copy of the original string for each function
    char upperString[MAX_SIZE];
    char lowerString[MAX_SIZE];
    char flipString[MAX_SIZE];

    strcpy(upperString, inputString);
    strcpy(lowerString, inputString);
    strcpy(flipString, inputString);

    // Apply each function
    upper(upperString);
    lower(lowerString);
    flip(flipString);

    // Display the results
    cout << "Uppercase: " << upperString << endl;
    cout << "Lowercase: " << lowerString << endl;
    cout << "Flipped: " << flipString << endl;

    return 0;
}

// Function Definitions

// Function to convert a string to uppercase
void upper(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toupper(str[i]);
    }
}

// Function to convert a string to lowercase
void lower(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}

// Function to flip the case of a string
void flip(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}