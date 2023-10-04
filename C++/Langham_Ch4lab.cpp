//******************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 4 Lab: The Speed of Sound
// File Name: Langham_Ch4lab.cpp
// Course/Section: COSC 1337
// Date Started: 09.19.23
// Date Completed: 08.19.23
// Instructor: Sravan Kumpati
// An interactive program that calculates the time it takes for
// a sound wave to travel a certain distance through different 
// mediums, such as air, water, or steel.
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
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
//variables
    const int AIR = 1100;
    const int WATER = 4900;
    const int STEEL = 16400;
    int choice;
    double distance;
    double time;

// Display Menu & Users Choice
    cout << "This program will tell you how long it takes a sound wave \n to travel a specific distance through a particular medium." << endl;
    cout << "Select a medium for the sound wave to travel through: (Please type 1, 2, or 3.)" << endl;
    cout << "1. Air" << endl;
    cout << "2. Water" << endl;
    cout << "3. Steel" << endl;
    cin >> choice;
    
//Validate Users Choice
    while (choice < 1 || choice > 3)
    {
        cout << "Please enter a valid choice: (1, 2, or 3.)" << endl;
        cin >> choice;
    }

// Get Distance
    cout << "Enter the distance the sound wave will travel: " << endl;
    cin >> distance;

//Validate Distance
    while (distance < 0)
    {
        cout << "Please enter a positive number for the distance: " << endl;
        cin >> distance;
    }

// Calculate Time & Display Results

    if (choice == 1)
   {
         time = distance / AIR;
         cout << "The sound wave will travel " << distance << "feet through air in " << fixed << setprecision(4) << time << " seconds" << endl;
    }
    else if (choice == 2)
    {
         time = distance / WATER;
         cout << "The sound wave will travel " << distance << " feet through water in " << fixed << setprecision(4) << time << " seconds" << endl;
   }
    else if (choice == 3)
    {
         time = distance / STEEL;
         cout << "The sound wave will travel " << distance << " feet through steel in " << fixed << setprecision(4) << time << " seconds" << endl;
    }
    return 0;
}