//******************************************************************
// Author: Marissa Langham
// Course/Section: COSC 1337
// Instructor: Sravan Kumpati
// Program Name: Lab Exam 2
// Date: 11.7.2023
// File Name: MarissaLanghamLabExam2.cpp
//******************************************************************

#include <iostream>
#include <string>

using namespace std;

class PayRoll 
{
private:
    string name;
    string department;
    double hourlyPayRate;
    double hoursWorked;

public:
    // Setters
    void setName(string employeeName) 
    {
        name = employeeName;
    }

    void setDepartment(string employeeDept) 
    {
        department = employeeDept;
    }

    void setHourlyPayRate(double payRate) 
    {
        hourlyPayRate = payRate;
    }

    void setHoursWorked(double hours) 
    {
        hoursWorked = hours;
    }

    // Getters
    string getName() 
    {
        return name;
    }

    string getDepartment() 
    {
        return department;
    }

    double getHourlyPayRate() 
    {
        return hourlyPayRate;
    }

    double getHoursWorked() 
    {
        return hoursWorked;
    }

    // Calculate gross pay
    double calculateGrossPay() 
    {
        double grossPay;
        if (hoursWorked > 40) 
        {
            double overtimeHours = hoursWorked - 40;
            grossPay = 40 * hourlyPayRate + overtimeHours * 1.5 * hourlyPayRate;
        } 
        else 
        {
            grossPay = hoursWorked * hourlyPayRate;
        }
        return grossPay;
    }
};

int main() {
    PayRoll employees[4];

    // Employee information
    for (int i = 0; i < 4; i++) 
    {
        string name, department;
        double hourlyPayRate, hoursWorked;

        cout << "Enter employee's name: ";
        getline(cin, name);

        cout << "Enter department: ";
        getline(cin, department);

        cout << "Enter hourly pay rate: ";
        cin >> hourlyPayRate;

        cout << "Enter hours worked: ";
        cin >> hoursWorked;

        cin.ignore();

        employees[i].setName(name);
        employees[i].setDepartment(department);
        employees[i].setHourlyPayRate(hourlyPayRate);
        employees[i].setHoursWorked(hoursWorked);
    }

    // Display employee information
    for (int i = 0; i < 4; i++) 
    {
        cout << "Employee Name: " << employees[i].getName() << endl;
        cout << "Department: " << employees[i].getDepartment() << endl;
        cout << "Hours Worked: " << employees[i].getHoursWorked() << endl;
        cout << "Hourly Pay Rate: " << employees[i].getHourlyPayRate() << endl;
        cout << "Gross Pay: " << employees[i].calculateGrossPay() << endl;
        cout << endl;
    }

    return 0;
}