//*********************************************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 12 Lab A: 
// File Name: Langham_Ch10labA.cpp
// Course/Section: COSC 1337
// Date Started: 11.25.23
// Date Completed: 11.25.23
// Instructor: Sravan Kumpati
// Description: Word Separator – Create a program that turns a sentence with uppercase-starting
// words into a spaced string, with only the first word capitalized.
// Program Pass Test? Yes
// Program Meet Requirements? Yes
//*********************************************************************************************

/*
Directions:

    Write a program that accepts as input a sentence with all the words running 
   together, but the first character of each word is an uppercase letter and stores it in the 
   form of a string object. Convert the sentence to a string in which the words are separated 
   by spaces and only the first word starts with an uppercase letter. For example, the string 
   “StopAndSmellTheRoses” would be converted to “Stop and smell the roses”. Note:  += operator
   can be used with strings.  

Sample Output:

    Output:  Display the new string

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
#include <algorithm>
#include <iomanip>

using namespace std;

// Function prototypes
void CovertString(string& str);

int main() 
{
     // Declare variables
    string str;
    int size;

    // Prompt user for input
    cout << "Enter a sentence with all the words running together, but the first character of each word is an uppercase letter: ";
    getline(cin, str);

    // Call function to convert string
    CovertString(str);

     // Display the new string
    cout << "The new string is: " << str << endl;

    return 0;
}

void CovertString(string& str)
{
    // Convert the sentence to a string in which the words are separated by spaces and only the first word starts with an uppercase letter
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
            str.insert(i, " ");
        }
    }

}

