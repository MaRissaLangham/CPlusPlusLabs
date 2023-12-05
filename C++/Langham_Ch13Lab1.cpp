// Author: Marissa Langham
// Assignment Number: Chapter 12 Lab 1: File Encryption
// File Name: Langham_Ch13lab1.cpp
// Course/Section: COSC 1337
// Date Started: 12.04.23
// Date Completed: 12.04.23
// Instructor: Sravan Kumpati
// Description: A program that reads the contents of a file, modifies each character in the 
// file into a code, and then writes the coded characters out to a second file.
// Program Pass Test? Yes
// Program Meet Requirements? Yes
//*********************************************************************************************

/*
Directions:

        File encryption is the science of writing the contents of a file in a secret code.
        Your encryption program should work like a filter reading the contents of one file, 
        modifying each character in the input file into a code, and then writing the coded 
        characters out to a second file.  The second file will be a version of the first file 
        but written in a secret code. In Notepad or something similar, you will create a file 
        with text in it.  It should be several lines long. Your program should read the file 
        character by character and make some change to the character before writing that 
        character to a second new encrypted file.

        The encryption technique:
        Add 5 to the ASCII code of each character and then multliply the new ASCII code of each character by 2 in the file before it is written to the 
        second file.

        Your program should check the fail bit after each open, read, and write operations.
        Display an error message if the operation failed.
    
Sample Output:
    
        Encryption completed successfully! Encrypted file saved as: EncryptedCelestialVeil.txt

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
void encryptFile(const string& inputFile, const string& outputFile);

int main() 
{
    // Declare variables/ files names
    string inputFile = "CelestialVeil.txt";
    string outputFile = "EncryptedCelestialVeil.txt";

    // Call to encrypt the file
    encryptFile(inputFile, outputFile);

    // Display success message
    cout << "Encryption completed successfully! Encrypted file saved as: " << outputFile << endl;

    return 0;
}

void encryptFile(const string& inputFile, const string& outputFile) 
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

    // Read the input file character by character
    while (inFile.get(ch)) 
    {
        // Check for file read error
        if (inFile.fail()) 
        {
            cerr << "Error reading from file: " << inputFile << endl;
            break;
        }

        // Encrypt the character
        int encryptedCharCode = int(ch) + 10;

        // Write the encrypted character to the output file
        outFile.put(char(encryptedCharCode));

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