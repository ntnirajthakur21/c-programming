// C Program To Print ASCII Value of any Number Character
// - Niraj Kumar Thakur

#include<stdio.h>                                                   // Header File Include
#include<conio.h>                                                   // Header File Include

int ASCII_Value(void);                                              // Declare a function
void main()                                                         // Main Function Start
{
    ASCII_Value();                                                   // Function Call
    printf("\nDo You Want To Try Again. If Yes Then Enter \033[0;32m 'Y' \033[0m Else Enter Any Key To Exit");
    if(getch() == 'Y' || getch() == 'y')                             // If condition to re use the program without closing it
    {
        main();
    }
    getch();                                                        // Inputs a character from user that hold the program to see result
}                                                                   // Ends of Main Function

int ASCII_Value(void)
{
    char character;                                                   // Variable Dechare
    printf("\nEnter any Character :");                                // Prints the message
    character = getch();                                              // Accepts single character from user
    printf("\nASCII Value of %c is %d\n",character, character);       // Print the Result
}