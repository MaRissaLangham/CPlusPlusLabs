//******************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 2 Lab 2: Basketball Player Height
// File Name: Langham_Ch2lab.2.cpp
// Course/Section: COSC 1337
// Date Started: 08.29.23
// Date Completed: 08.29.23
// Instructor: Sravan Kumpati
// A program to compute and display the height of a 75 inch 
// Basketball player in feet/inches form.
// Program Pass Test? Yes.
// Program Meet Requirements? Yes.
//******************************************************************

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

int main()
{
    // Declare variables
    int inchesTotal;
    int inches;
    int feet;
    const int INCHESINFEET = 12;
    
    // Assign values to variables
    inchesTotal = 75;
    
    // Calculate height
    feet = inchesTotal / INCHESINFEET;
    inches = inchesTotal % feet;
    
    // Display height
    cout << "A 75 inch basketball player is " << feet << " feet " << inches << " inches tall." << endl;
    
    return 0;
}
