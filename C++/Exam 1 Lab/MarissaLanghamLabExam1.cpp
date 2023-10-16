
//******************************************************************
// Author: Marissa Langham
// Course/Section: COSC 1337
// Instructor: Sravan Kumpati
// Program Name: Lab Exam 1
// Date: 10.14.2023
// File Name: MarissaLanghamLabExam1.cpp
// Program Description: This program will calculate the miles per gallon 
// for three cars and determine which car is the most efficient.
//******************************************************************

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void userInput(string &carMake1, string &carMake2, string &carMake3, double &gallonsUsed1, double &gallonsUsed2, double &gallonsUsed3, double &mpg1, double &mpg2, double &mpg3, double distance);

int main()
{
    string carMake1, carMake2, carMake3;
    double gallonsUsed1, gallonsUsed2, gallonsUsed3, mpg1, mpg2, mpg3;
    double distance = 500;

    userInput(carMake1, carMake2, carMake3, gallonsUsed1, gallonsUsed2, gallonsUsed3, mpg1, mpg2, mpg3, distance);

    if (mpg1 > mpg2 && mpg1 > mpg3)
    {
        cout << "The " << carMake1 << " is the most efficient car and it has " << mpg1 << " Miles Per Gallon." << endl;
    }
    else if (mpg2 > mpg1 && mpg2 > mpg3)
    {
        cout << "The " << carMake2 << " is the most efficient car and it has " << mpg2 << " Miles Per Gallon." << endl;
    }
    else if (mpg3 > mpg1 && mpg3 > mpg2)
    {
        cout << "The " << carMake3 << " is the most efficient car and it has " << mpg3 << " Miles Per Gallon." << endl;
    }

    return 0;
}

void userInput(string &carMake1, string &carMake2, string &carMake3, double &gallonsUsed1, double &gallonsUsed2, double &gallonsUsed3, double &mpg1, double &mpg2, double &mpg3, double distance)
{
    cout << "Enter the make of 3 cars (separated by spaces): ";
    cin >> carMake1 >> carMake2 >> carMake3;
    cout << "Enter the number of gallons used for 3 cars (separated by spaces): ";
    cin >> gallonsUsed1 >> gallonsUsed2 >> gallonsUsed3;

    mpg1 = distance / gallonsUsed1;
    mpg2 = distance / gallonsUsed2;
    mpg3 = distance / gallonsUsed3;
}
