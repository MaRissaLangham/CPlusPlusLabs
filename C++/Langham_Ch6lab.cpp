//******************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 6 Lab: Wining Division
// File Name: Langham_Ch6lab.cpp
// Course/Section: COSC 1337
// Date Started: 11.08.2023
// Date Completed: 11.08.2023
// Instructor: Sravan Kumpati
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
#include <string>

using namespace std;

// Function prototypes
double getSales(const string& divisionName);
void findHighest(double northeastSales, double southeastSales, double northwestSales, double southwestSales);

int main() 
{
    // Get sales for each division
    double northeastSales = getSales("Northeast");
    double southeastSales = getSales("Southeast");
    double northwestSales = getSales("Northwest");
    double southwestSales = getSales("Southwest");

    // Find and display the highest sales
    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}

// Function to get sales input for a division
double getSales(const string& divisionName) 
{
    double sales;
    
    // Input validation loop
    do {
        cout << "Enter the quarterly sales for the " << divisionName << " division: ";
        cin >> sales;

        if (sales <= 0) 
        {
            cout << "Sales figures cannot be negative. Please re-enter." << endl;
        }

    } while (sales <= 0);

    return sales;
}

// Function to find the highest sales and display the result
void findHighest(double northeastSales, double southeastSales, double northwestSales, double southwestSales) 
{
    double highestSales = northeastSales;
    string divisionName = "Northeast";

    if (southeastSales > highestSales) 
    {
        highestSales = southeastSales;
        divisionName = "Southeast";
    }

    if (northwestSales > highestSales) 
    {
        highestSales = northwestSales;
        divisionName = "Northwest";
    }

    if (southwestSales > highestSales)
    {
        highestSales = southwestSales;
        divisionName = "Southwest";
    }

    cout << "The " << divisionName << " division had the highest sales this quarter." << endl;
    cout << "Their sales were $" << fixed << setprecision(2) << highestSales << "." << endl;
}