// C Program To Print Alphabet Letters From 'A' to 'Z'
// - Niraj Kumar Thakur

#include<stdio.h>                       // Header File Include
#include<conio.h>                       // Header File Include
void main()                             // Main Function Start
{
    char letter = 'A', end = 'Z';       // Declaring Variable first and last character
    while(letter != end)                // While loop executes till it reach to last characters
    {
        printf("%c ",letter);           // Print the Results
        letter = letter +1;             // next character
    }
    getch();                            // Inputs a character from user that hold the program to see result
}                                       // Ends of Main Function