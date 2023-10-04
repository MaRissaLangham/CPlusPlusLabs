//******************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 2 Lab 1: Flash Drive Price
// File Name: Langham_Ch2lab.1.cpp
// Course/Section: COSC 1337
// Date Started: 08.29.23
// Date Completed: 08.29.23
// Instructor: Sravan Kumpati
// A program to determine how much the company should sell the flash 
// drives for if it wants to make a 35 percent profit.
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
    double cost;
    double profit;
    double price;
    int total;
    
    // Assign values to variables
    cost = 8.00;
    profit = 0.35;
    
    // Calculate price
    price = cost + (cost * profit);

    total = 6 - 6 / 3 + 3;
    
    // Display price
    cout << "To have a 35% profit, the flash drive should sell for $" << price << endl;
    cout << total << endl;
    
    return 0;
}
