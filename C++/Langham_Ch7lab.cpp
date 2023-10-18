//******************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 7 Lab: Gradutity Calculator
// File Name: Langham_Ch5Lab.cpp
// Course/Section: COSC 1337
// Date Started: 10.17.23
// Date Completed: 10.17.23
// Instructor: Sravan Kumpati
// This program will compute and display a restaurant tip based on 
// a total bill excluding tax.
// Program Pass Test?
// Program Meet Requirements?
//******************************************************************

/*
I will abide by the ACC Honor code and answer these following
questions with full integrity and honesty, I understand if I answer
"False" to any of these questions, I will receive zero for this assignemnt.
 
1. My submission is my own work.
2. I promise not to share my work with anyone in any form.
3. I did not use any outside tools to complete the Lab assignment.
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

class Tips 
{
private:
  double taxRate;

public:
    Tips()
    {
        taxRate = 0.085;
    }
  Tips(double UsertaxRate) 
  {
    taxRate = UsertaxRate / 100;
  }

  double computeTip(double totalBill, double tipRate) 
  {
    double mealCost = totalBill / (1 + taxRate);
    return mealCost * tipRate;
  }
};

int main() {

  double UsertaxRate;

  cout << "This program will compute a restaurant tip based on a total bill "
          "amount and the % the patron wishes to tip the server."
       << endl;

  cout << "Tax % for this location: ";
   cin >> UsertaxRate;

  while (UsertaxRate < 0.0) 
    {
      cout << "Tax % cannot be less than 0. Please re-enter tax %: ";
      cin >> UsertaxRate;
    }
 

  Tips tipCalculator(UsertaxRate);

  char continueCalculating = 'y';

  while (continueCalculating == 'y' || continueCalculating == 'Y') 
  {
    cout << "***********Tip Helper ***********" << endl;

    double totalBill, tipRate;

    cout << "Enter total bill amount: ";
    cin >> totalBill;

    cout << "Enter desired tip %: ";
    cin >> tipRate;

    double tipAmount = tipCalculator.computeTip(totalBill, tipRate);

    cout << "The tip should be: $" << tipAmount << endl;

    cout << "Compute another tip (y/n)? ";
    cin >> continueCalculating;
  }

  return 0;
}