//*********************************************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 10 Lab: Pointers
// File Name: Langham_Ch10labA.cpp
// Course/Section: COSC 1337
// Date Started: 11.09.23
// Date Completed: 11.09.23
// Instructor: Sravan Kumpati
// Description: Write a program that uses a function to determine the median of a sorted 
// array of integers.
// Program Pass Test? Yes
// Program Meet Requirements? Yes
//*********************************************************************************************

/*
Directions:
Write a program that uses a function to determine the median of a sorted array of integers.
Your program should start with two arrays of integers containing the following values:

    Even numbered array: 17 32 45 68 99 101 67 89 22 27
    Odd numbered array: 17 32 45 68 99 101 67 89 22

Using a sort function of your choice, first sort the arrays. 
NOTE: you may use the STL sort function or your own sort function. 
To use the STL sort:
    Add #include <algorithm> to your program
    sort (arrayname, arrayname + size of array) (beginning and ending elements)

Then, write a function that determines the median of a sorted array. The function should take
an array of numbers and an integer indicating the size of the array and return the median of the
values in the array. The same function should be called twice – once for the even array and
once for the odd array.

Your program should also have a printArray function that can be used to print the sorted array.
(It should be called twice, once for each array). It should be passed the array and its size.
Input validation – none.
Modularity – In addition to the main function, your program should have a sort function, the
median function, and the printArray function.

When an array is passed to the median and printArray functions, it should be passed using 
pointer notation. Within each of these two functions, the array should be referred to by pointer 
notation. In other words, use *(arr + n) instead of arr[n].

Sample Output:

Median of the odd array:
17 22 32 45 67 68 89 99 101
is 67

Median of the even array:
17 22 27 32 45 67 68 89 99 101
is 56

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


using namespace std;

// Function prototypes
void sortArray(int* arr, int size);
int findMedian(int* arr, int size);
void printArray(int* arr, int size);

int main() 
{
    // Even numbered array
    int evenArray[] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};
    int evenSize = sizeof(evenArray) / sizeof(evenArray[0]);

    // Odd numbered array
    int oddArray[] = {17, 32, 45, 68, 99, 101, 67, 89, 22};
    int oddSize = sizeof(oddArray) / sizeof(oddArray[0]);

    // Sort arrays
    sortArray(evenArray, evenSize);
    sortArray(oddArray, oddSize);

    // Print and Calculate median for the odd array
    cout << "Median of the odd array:\n";
    printArray(oddArray, oddSize);
    cout << "is " << findMedian(oddArray, oddSize) << endl;

    // Print and Calculate median for the even array
    cout << "\nMedian of the even array:\n";
    printArray(evenArray, evenSize);
    cout << "is " << findMedian(evenArray, evenSize) << endl;

    return 0;
}

// Function to sort an array
void sortArray(int* arr, int size) 
{
    sort(arr, arr + size);
}

// Function to find median
int findMedian(int* arr, int size)
{
    if (size % 2 == 0) 
    {
        // Even number of elements
        return (*(arr + (size / 2 - 1)) + *(arr + size / 2)) / 2;
    } 
    else 
    {
        // Odd number of elements 
        return *(arr + size / 2);
    }
}

// Function to print the elements of an array
void printArray(int* arr, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}