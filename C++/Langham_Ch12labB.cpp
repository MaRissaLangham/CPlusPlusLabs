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

using namespace std;

// Function prototypes
void Upper(string& str, string& strUpper);
void Lower(string& str, string& strLower);
void Flip(string& str, string& strFlip);

int main()
{
// Declare variables
    string str;
    string strUpper;
    string strLower;
    string strFlip;

    // Welcome & Prompt user for input
    cout << "Welcome to the Case Manipulator!" << endl;
    cout << "Please, Enter a sentence: ";
    getline(cin, str);

    // Call function to convert string
    Upper(str, strUpper);
    Lower(str, strLower);
    Flip(str, strFlip);

     // Display the new string
     cout << " Original: " << str << endl;
     cout << " Uppercase: " << strUpper << endl;
     cout << " Lowercase: " << strLower << endl;
     cout << " Flipped: " << strFlip << endl;
}

void Upper(string& str, string& strUpper)
{
    // Copy string to new string
    strUpper = str; 

    // Loop through string and convert to uppercase
    for (int i = 0; i < strUpper.length(); i++)
    {
        if (islower(strUpper[i]))
        {
            strUpper[i] = toupper(strUpper[i]);
        }
    }
}

void Lower(string& str, string& strLower)
{
    // Copy string to new string
    strLower = str; 

    // Loop through string and convert to lowercase
    for (int i = 0; i < strLower.length(); i++)
    {
        if (isupper(strLower[i]))
        {
            strLower[i] = tolower(strLower[i]);
        }
    }
}

void Flip(string& str, string& strFlip)
{
    // Copy string to new string
    strFlip = str; 

    // Loop through string and flip case
    for (int i = 0; i < strFlip.length(); i++)
    {
        // If uppercase, convert to lowercase
        if (isupper(strFlip[i]))
        {
            strFlip[i] = tolower(strFlip[i]);
        }
        // If lowercase, convert to uppercase
        else if (islower(strFlip[i]))
        {
            strFlip[i] = toupper(strFlip[i]);
        }
    }
}