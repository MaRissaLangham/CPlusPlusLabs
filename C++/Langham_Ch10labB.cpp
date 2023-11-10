//*********************************************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 10 Lab: 
// File Name: Langham_Ch10labA.cpp
// Course/Section: COSC 1337
// Date Started: 11.09.23
// Date Completed: 11.09.23
// Instructor: Sravan Kumpati
// Description: This program collects data on the number of movies college students watch in a month. 
// After the user enters the movie counts for each student, the program sorts the data and calculates 
// the average.
// Program Pass Test? Yes
// Program Meet Requirements? Yes
//*********************************************************************************************

/*
Directions:
Write a program that will be used to gather statistical data about the number of movies college 
students see in a month. The program should ask the user how many students were surveyed and 
dynamically allocate an array of that size. The program then should allow the user to enter the 
number of movies each student has seen. It should then sort the scores and calculate the average.

Modularity:
Main:  The main function should accept the number of students from the user and dynamically create 
        an array large enough to contain number of movies watched for each student. 
Input validation:  The number of students should be a positive integer. 
        Print the average and free the allocated array when complete.
Get the data.  This function should get the number of movies watched by each college student. 
Input validation:  The number of movies should be a positive integer.
Sort the data.  This function should sort the array in ascending order. 
        Note you may use the Standard Template Library sort function or your own sort function.  
        To use the STL sort: Add #include <algorithm> to your program
        sort (arrayname, arrayname + size of array) (beginning and ending elements)
Display: This function should display the sorted list of the number of movies watched.
Average: This function should be a value-returning function that calculates the average of the movies 
        watched and returns it to the main function.
Requirements: Your array must be dynamically allocated. In passing your array to functions, you must 
    declare the array parameter using pointer notation instead of array notation, and inside each 
    function you must use pointer notation instead of array notation to access the array elements.

Sample Output:

Number of Movies Watched
------------------------
75
81
88
---------
Average  81.3

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
#include <algorithm>
#include <iomanip>

using namespace std;

// Function prototypes
void getData(int* movies, int size);
void sortData(int* movies, int size);
void displayData(const int* movies, int size);
double calculateAverage(const int* movies, int size);

int main() {
    int numStudents;

    // Get the number of students with input validation
    do 
    {
        cout << "Enter the number of students surveyed: ";
        cin >> numStudents;

        if (numStudents <= 0) 
        {
            cout << "Please enter a positive integer.\n";
        }

    } while (numStudents <= 0);

    // Dynamically allocate an array for the number of movies watched
    int* movies_watched = new int[numStudents];

    // Get data, sort it, and display the results
    getData(movies_watched, numStudents);
    sortData(movies_watched, numStudents);

    cout << "Number of Movies Watched\n";
    cout << "------------------------\n";
    displayData(movies_watched, numStudents);

    // Calculate and display the average
    double average = calculateAverage(movies_watched, numStudents);
    cout << "------------------------\n";
    cout << "Average  " << fixed << setprecision(1) << average << endl;

    // Free the allocated memory
    delete[] movies_watched;

    return 0;
}

// Get the number of movies watched by each student
void getData(int* movies, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        do 
        {
            cout << "Enter the number of movies watched by student " << (i + 1) << ": ";
            cin >> movies[i];

            if (movies[i] <= 0) 
            {
                cout << "Please enter a positive integer.\n";
            }

        } while (movies[i] <= 0);
    }
}

// Sort the array in ascending order
void sortData(int* movies, int size) 
{
    sort(movies, movies + size);
}

// Display the sorted list
void displayData(const int* movies, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        cout << movies[i] << endl;
    }
}

// Calculate the average
double calculateAverage(const int* movies, int size)
{
    double sum = 0;

    for (int i = 0; i < size; ++i) 
    {
        sum += movies[i];
    }

    return sum / size;
}