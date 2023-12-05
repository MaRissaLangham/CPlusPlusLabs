// Author: Marissa Langham
// Assignment Number: Chapter 12 Lab 2: File Decryption
// File Name: Langham_Ch13lab2.cpp
// Course/Section: COSC 1337
// Date Started: 12.04.23
// Date Completed: 12.04.23
// Instructor: Sravan Kumpati
// Description: A program that decrypts a file that was encrypted using an 
// encryption technique from lab 1.
// Program Pass Test? Yes
// Program Meet Requirements? Yes
//*********************************************************************************************

/*
Directions:

    Write a program that decrypts the file produced by the program in Prog. 1. The decryption 
    program should read the contents of the coded file, restore the information to its original 
    state and write it to another (third) file.  (The output file of program 2 should be the same 
    as the input file of program 1)

Sample Output:
    
        Decryption completed successfully! Decrypted file saved as: DecryptedCelestialVeil.txt
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

using namespace std;

// Function prototype
void decryptFile(const string& inputFile, const string& outputFile);

int main() 
{
    string inputFile = "EncryptedCelestialVeil.txt";
    string outputFile = "DecryptedCelestialVeil.txt";

    decryptFile(inputFile, outputFile);

    cout << "Decryption completed successfully! Decrypted file saved as: " << outputFile << endl;

    return 0;
}


void decryptFile(const string& inputFile, const string& outputFile) 
{
    // Open the files & check for errors
    ifstream inFile(inputFile, ios::in);

    if (!inFile) 
    {
        cerr << "Error opening input file: " << inputFile << endl;
        return;
    }

    ofstream outFile(outputFile, ios::out);

    if (!outFile) 
    {
        cerr << "Error opening output file: " << outputFile << endl;
        inFile.close();
        return;
    }

    char ch;

    // Read the file character by character 
    while (inFile.get(ch)) 
    {
        // Check for file read error
        if (inFile.fail()) 
        {
            cerr << "Error reading from file: " << inputFile << endl;
            break;
        }

        // Decrypt the character
        int decryptedCharCode = int(ch) - 10;

        // Write the decrypted character to the output file
        outFile.put(char(decryptedCharCode));

        // Check for file write error
        if (outFile.fail()) 
        {
            cerr << "Error writing to file: " << outputFile << endl;
            break;
        }
    }

    // Close the files
    inFile.close();
    outFile.close();
}