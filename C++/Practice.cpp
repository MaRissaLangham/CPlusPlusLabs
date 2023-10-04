/// sum and adverage of two numbers
/// get two nunbers from the user
/// must use one function to do all of the following: swapping, sum, average.
/// display results in main function
/// user input should come from main program and be passed to the function

#include <iostream>

using namespace std;

void mathAndSwap (double &num1, double &num2, double &sum, double &average); // function prototype

int main() 
{

    double num1, num2, sum, average;

    cout << "Enter two whole numbers seprated by a space: ";
    cin >> num1 >> num2;

    mathAndSwap(num1, num2, sum, average); // call function mathAndSwap

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl; // sum of num1 and num2
    cout << "The average of " << num1 << " and " << num2 << " is " << average << endl; // average of num1 and num2

    return 0;
}


void mathAndSwap (double &num1, double &num2, double &sum, double &average) 
{

    double temp = num1; // temp is a temporary variable
    num1 = num2; // num1 is now equal to num2
    num2 = temp; // num2 is now equal to temp

    sum = num1 + num2; // sum of num1 and num2
    average = sum / 2; // average of num1 and num2
}


