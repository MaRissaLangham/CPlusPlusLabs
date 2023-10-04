//******************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 2 Lab 1: Property Tax
// File Name: Langham_Ch3lab.1.cpp
// Course/Section: COSC 1337
// Date Started: 09.12.2023
// Date Completed: 09.12.2023
// Instructor: Sravan Kumpati
// A program that takes the actual value of the property and the 
// current tax rate for each $100 of assessed value. The program should 
// then calculate and report how much annual property tax the homeowner 
// will be charged for this property. Lastly, display the property value, 
// the assessed value, and the property tax.
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
using namespace std;

int main()
{
    // Declare variables
    double actualValue;
    double taxRate;
    double assessedValue; 
    double annualPropertyTax;

    // Ask user to input value of their property
    cout << "Enter the value of your property: ";
    cin >> actualValue;

    // Ask user to input current tax rate for each $100 of assessed value
    cout << "Enter the current tax rate for each $100 of assessed value: ";
    cin >> taxRate;

    // Calculate assessed value
    assessedValue = actualValue * 0.6;

    // Calculate annual property tax
    annualPropertyTax = (assessedValue / 100) * taxRate;

    // Display annual property tax
    cout << left << "Property value: $  " << fixed << setprecision(2) << right << actualValue << endl;
    cout << left << "Assessed value: $  " << fixed << setprecision(2) << right << assessedValue << endl;
    cout << left << "Property tax:   $  " << fixed << setprecision(2) << right << annualPropertyTax << endl;

    return 0;
}