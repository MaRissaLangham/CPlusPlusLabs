//*********************************************************************************************
// Author: Marissa Langham
// Assignment Number: Chapter 9 Lab: Sorting a Playlist
// File Name: Langham_Ch9lab.cpp
// Course/Section: COSC 1337
// Date Started: 10.26.23
// Date Completed: 10.26.23
// Instructor: Sravan Kumpati
// a program that allows the user to enter 10 songs and their artists 
// into a playlist and will sort the entries by artist order.
// Program Pass Test? Yes.
// Program Meet Requirements? Yes.
//*********************************************************************************************

/*
Directions:
You will write a program that allows the user to enter 10 songs and 
their artists into a playlist and will sort the entries by artist order. 
The program should use a 10 element array of structure objects that holds
two string variables:  artist and title.  Once the data has been read in 
and stored, it should sort the entries in ascending order by artist. 
It should then display the sorted array with appropriate headings.

Modularity:  
The main function should create the Playlist object and call at least 3 other functions:

1. Get the data from the user. Using a loop, have the user populate the 
    playlist object array with 10 artist and songs in no particular order.
    No validation is necessary. However, you should use the C++ getline 
    function instead of cin so that the user can type spaces in the name 
    and song title.
2. Sort the list. You may use either the bubble sort or the selection 
    sort to sort your playlist.
3. Display the list. The function should display the artist and title
    in sorted order with appropriate headings.  

Sample Output:

Playlist

Artist-Title
============================================
1. Cream - Sunshine of Your Love
2. Jimi Hendrix - All Along the Watchtower
3. Stevie Ray Vaughn - Texas Flood
4. ZZ Top - La Grange
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
#define PLAYLISTSIZE 10

using namespace std;


struct Song
{
    string artist;
    string title;
};

void getData(Song Playlist[])
{

     for (int x = 0; x < PLAYLISTSIZE; x++)
     {
        cout << "Enter the artist name: ";
        getline(cin, Playlist[x].artist);

        cout << "Enter the song title: ";
        getline(cin, Playlist[x].title );
     }

};

void sortData(Song Playlist[])
{
    Song temp;

    for(int x = 0; x < PLAYLISTSIZE; x++) 
    { for(int y = x + 1; y < PLAYLISTSIZE; y++) 
        { if( Playlist[x].artist > Playlist[y].artist) 
            {
                temp = Playlist[x];
                Playlist[x] = Playlist[y];
                Playlist[y] = temp;
            }
        }
    }


};

void displayData(Song Playlist[])
{
    cout << " " << endl;
    cout << "Your Playlist" << endl;
    cout << " " << endl;
    cout << "Artist-Title" << endl;
    cout << "============================================" << endl;

    for(int x=0; x < PLAYLISTSIZE; x++) 
    {
            cout << x + 1 << ". " << Playlist[x].artist << " - " << Playlist[x].title << endl;

    }
};

int main()
{
    cout<< "Welcome to Playlist Sorter!" << endl;
    cout<< "Please enter 10 songs below." << endl;

    Song Playlist[PLAYLISTSIZE];

    getData(Playlist);
    sortData(Playlist);
    displayData(Playlist);


return 0;
}