//******************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 5 Lab: Sales Bar Chart
// File Name: Langham_Ch5Lab.cpp
// Course/Section: COSC 1337
// Date Started: 09.26.23
// Date Completed: 09.26.23
// Instructor: Sravan Kumpati
// An interactive program that asks the user to enter today’s sales
// for each of three stores. The program should then produce a bar 
// graph (made up of asterisk) displaying each of the store’s sales.   
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

/* To Do:
- user input for sales
- validate sales >= 0
- round sales to nearest 100
- each asterisk represents $100
- display bar graph

 Notes:
- All variables should be declared as floats.
- You will need to include math.h in "header".
- You will need to use the round function found in the math library.
- You will need to use a validation loop to validate that each sales
  figure entered is >= 0.
- You will need to use setfill('*') to set the fill character of the
  bar graph.
*/


#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std; 

int main()
{
    // Variables
        float store1;
        float store2;
        float store3;
        float roundedStore1;
        float roundedStore2;
        float roundedStore3;

    // User Input & Validation loop
        cout << "Enter today's sales for store 1: " << endl;
        cin >> store1;

            if (store1 >= 0 ) 
            {
                roundedStore1 = round(store1 / 100);
            }
            else
            {   while (store1 < 0) 
                {
                    cout << "Please enter a positive number for store 1: " << endl;
                    cin >> store1;
                }

                roundedStore1 = round(store1 / 100);   
            }
        cout << "Enter today's sales for store 2: " << endl;
        cin >> store2;

            if (store2 >= 0 ) 
            {
                roundedStore2 = round(store2 / 100);
            }
            else
            {   while (store2 < 0) 
                {
                    cout << "Please enter a positive number for store 2: " << endl;
                    cin >> store2;
                }

                roundedStore2 = round(store2 / 100);   
            }
        cout << "Enter today's sales for store 3: " << endl;
        cin >> store3;

            if (store3 >= 0 ) 
            {
                roundedStore3 = round(store3 / 100);
            }
            else
            {   while (store3 < 0) 
                {
                    cout << "Please enter a positive number for store 3: " << endl;
                    cin >> store3;
                }

                roundedStore3 = round(store3 / 100);   
            }

    // Display Bar Graph
        cout << "     Daily Sales     " << endl;
        cout << "    (Each * = $100)\n   " << endl;
        cout << "Store 1: " << setfill('*') << setw(roundedStore1) << "" << endl;
        cout << "Store 2: " << setfill('*') << setw(roundedStore2) << "" << endl;
        cout << "Store 3: " << setfill('*') << setw(roundedStore3) << "" << endl;
}