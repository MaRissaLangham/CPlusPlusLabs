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


// Example function prototype
// int userInput (double &hours, double &regularPay, &overtimeHours, &overtimepay, &holidayPay, &holidayhours;);
// int calculateGrossPay
// int calculateOvertime
// int calculateNetPay
// int CalculateVacationPay
// void DisplayPay

int main()
{
    // Declare variables
    double hours, regularPay, overtimeHours, overtimepay, grossPay, netPay, overtime, taxes, holidayPay;

    // Get the user's input
    userInput();

    // Get the gross pay
    // Get the overtime pay
    // Get Net pay & taxes total
    // Display pay totals

    return 0;
}

int userInput()
{
    // Declare variables
    double hours, regularPay, overtimeHours, overtimepay, grossPay, netPay, overtime, taxes, holidayPay;

    // Get the number of hours worked
    cout << "How many hours did you work? (Do NOT include hoilday pay, if any.) ";
    cin >> hours;

    if hours > 80
    {
        overtimeHours = hours - 80;

    }
    else
    {
        overtimeHours = 0;
    }

    // Get the hourly pay rate, overtime, and vaction pay
    cout << "How much do you get paid per hour? ";
    cin >> regularPay;
    cout << "How much do you get paid per hour for overtime? "; // Need to ask the user if they get 1.5 or 2 times their regular pay
    cin >> overtimepay;
    cout << "Did you get holiday pay, this paycheck? (Y/N) ";
    cin >> holidayPay;

    // Ask if the user got holiday pay
    if (holidayPay == 'Y' || holidayPay == 'y')
    {
        cout << "How much do you get paid for holiday pay? "; // Need to ask the user if they get 1.5 or 2 times their regular pay
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

int calculateNetPay ()
{
    //Declare Variables

    // Get Taxes & Subtract Tax from Total Pay

    //Return net pay & Tax Total


}

int CalculateVacationPay()
{
    // Declare variables
    double hours, regularPay, overtimeHours, overtimepay, grossPay, netPay, overtime, taxes, holidayPay;

    // Calculate the vacation pay
    vacationPay = hours * (2 * regularPay);

    return vacationPay;
}

void DisplayPay()
{
    // Declare variables
    double hours, regularPay, overtimeHours, overtimepay, grossPay, netPay, overtime, taxes, holidayPay;

    // Display the gross pay
    cout << "Your gross biweekly pay is: $" << grossPay << endl;

    // Display the net pay
    cout << "Your net biweekly pay is: $" << netPay << endl;

    // Display the overtime pay
    cout << "Your overtime pay for the paycheck is: $" << overtime << endl;

    // Display Hoilday Pay
    cout << "Your holiday pay for the paycheck is: $" << holidayPay << endl;

    // Display the taxes
    cout << "Your biweekly taxes withheld are: $" << taxes << endl;

    return 0;
}