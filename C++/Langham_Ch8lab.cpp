//******************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 8 Lab: Arrays
// File Name: Langham_Ch8lab.cpp
// Course/Section: COSC 1337
// Date Started: 10.24.23
// Date Completed: 10.24.23
// Instructor: Sravan Kumpati
// This program will calculate & display employee's gross pay 
// from a data file.
// Program Pass Test? Yes.
// Program Meet Requirements? Yes.
//******************************************************************

/*
Directions:
Design a PayRoll class that has data members for an employee’s hourly
pay rate and number of hours worked. The class should have member functions 
to set the hourly pay rate and number of hours worked and to calculate gross pay. 
The main program should create an array of seven PayRoll objects. It should contain 
two loops. The first loop should read the number of hours each employee worked and
their hourly pay rate from a file and call class set functions to store this information 
in the appropriate objects. The second loop should call a class function, once for each 
object, to return the employee’s gross pay, and display it as follows.

Sample Output:

Employee  Gross pay
========  =========
    1:    $ 400.00
    2:    $ 365.75
    3:    $ 120.00
    4:    $ 213.75
    5:    $ 320.00
    6:    $ 304.00
    7:    $ 360.00
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
#include <fstream>
#include <iomanip>

using namespace std;

class PayRoll 
{
    private:
        double hours;
        double payRate;

    public:
        // Default constructor  
        PayRoll()
        {
            payRate = 0.0;
            hours = 0.0;
        }

        // Setters & Getters
        void setHours (double Employeehours)
        {
            hours = Employeehours;
        }

        void setPayrate (double EmployeePayRate)
        {
            payRate = EmployeePayRate;
        }

        double getHours ()
        {
            return hours;
        }
   
        double getPayrate ()
        {
            return payRate;
        }

        // Calculate gross pay
        double calculateGrossPay()
        {
            return hours * payRate;
        }
};

int main()
{
    PayRoll employees[7];

    ifstream data;
    data.open("payroll.dat");

    for (int x = 0; x < 7; x++)
    {
        double Employeehours;
        double EmployeePayRate;

        data >> Employeehours;
        data >> EmployeePayRate;

        employees[x].setHours(Employeehours);
        employees[x].setPayrate(EmployeePayRate);
    }

    data.close();

    cout << "Employee  Gross pay" << endl;
    cout << "========  =========" << endl;

    for (int x = 0; x < 7; x++)
    {
        cout << "   " << x + 1 << ":     $" << fixed << setprecision(2) << employees[x].calculateGrossPay() << endl;
    }

    return 0;
}
