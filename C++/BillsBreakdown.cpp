//******************************************************************
// Author: Marissa Langham
// Date: 10.18.2023
// Bill Breakdown
// This program will allow the user to enter their total amount of 
// bills they pay very month and then break it down into 2 payments.
//******************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double billAmount;
    string billName;


char continueCalculating = 'y';

while (continueCalculating == 'y' || continueCalculating == 'Y') 
    {
        cout << "***********Bill Breakdown ***********" << endl;

        double totalBill, tipRate;

        cout << "Enter Bill Name: ";
        cin >> billName;

        cout << "Enter Bill Amount: ";
        cin >> billAmount;

        double billAmountSplit = billAmount / 2;

        cout << fixed << setprecision(2); // Set output to two decimal places
        cout << "The " << billName << " bill split into 2 payments is:" << billAmountSplit << endl;

        totalBill += billAmountSplit;

        cout << "Total amount of Bi- Monthly bill payments is: " << totalBill << endl;

        cout << "Add another bill (y/n)? ";
        cin >> continueCalculating;
    }

    return 0;

}
