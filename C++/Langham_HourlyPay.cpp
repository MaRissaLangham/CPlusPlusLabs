//******************************************************************
// Author: Marissa Langham
// Date: 10.04.2023
// practice with variables, input, output and arithmetic operators.
// This program will allow the user to enter the number of hours he 
// worked and the hourly rate of pay. It will then calculate the 
// gross pay, net pay, taxes, overtime of any hours over 80 
// (BiWeekly), and hoilday pay. The pay period is biweekly and the 
// user works in Bastrop, Texas.
//******************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables
    double hours, regularPay, overtimeHours, overtimepay, grossPay, netPay, overtime, taxes, holidayPay;

    // Get the user's input
    userInput();

    // Get the gross pay
    // Get the overtime pay
    // Get

    return 0;
}


int userInput()
{
    // Declare variables
    double hours, regularPay, overtimeHours, overtimepay, grossPay, netPay, overtime, taxes, holidayPay;

    // Get the number of hours worked
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get the hourly pay rate, overtime, and vaction pay
    cout << "How much do you get paid per hour? ";
    cin >> regularPay;
    cout << "How much do you get paid per hour for overtime? ";
    cin >> overtimepay;
    cout << "Did you get holiday pay, this paycheck? (Y/N) ";
    cin >> holidayPay;

    // Ask if the user got holiday pay
    if (holidayPay == 'Y' || holidayPay == 'y')
    {
        cout << "How much do you get paid for holiday pay? ";
        cin >> holidayPay;
    }
    else if (holidayPay == 'N' || holidayPay == 'n')
    {
        holidayPay = 0;
    }
    else
    {
        cout << "Invalid input. Please enter Y or N. ";
        cin >> holidayPay;
    }



    return 0;
}

int calculateGrossPay()
{
    // Declare variables
    double hours, regularPay, overtimeHours, overtimepay, grossPay, netPay, overtime, taxes, holidayPay;

    // Calculate the gross pay
    grossPay = hours * regularPay;

    return grossPay;
}

int calculateOvertime()
{
    // Declare variables
    double hours, regularPay, overtimeHours, overtimepay, grossPay, netPay, overtime, taxes, holidayPay;

    // Calculate the overtime hours
    overtimeHours = hours - 80;

    // Calculate the overtime pay
    overtime = overtimeHours * overtimepay;

    return overtime;
}