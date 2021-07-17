//  C - Program To Find The Combination Using Function
//  - Niraj Kumar Thakur

#include<stdio.h>                                                           // Include Header Files
#include<conio.h>                                                           // Include Header Files
long comb(int n, int r);                                                    // Function Declaration
void main()                                                                 // Main Function
{                                                                           // Main Function Starts
    int n,r;                                                                // Declaring variable
    printf("Enter the value of \"n\" and \"r\" :\n");                       // printing Message to input value of n and r
    scanf("%d%d",&n,&r);                                                    // taking value of n and r from user
    printf("\n\nThe Combination of %d and %d is %ld", n, r, comb(n,r));     // Printing the combination by calling comb() function which we have defined below
    getch();                                                                // Holds the program for a while and exits after entering any character
}                                                                           // Main Function Ends

long comb(int n, int r)                                                     // Defining comb(..) function
{
    long fact[3] = {n,(n-r),r};                                             // Declaring array to holds value that needs to calculating combinatin
    for (int i = 0; i < 3; i++)                                             // Outer For Loops Starts executes 3 times for calculating n!, n-r! and r! respectively
    {
        int loop = fact[i];                                                 // Assigning value of factorial to variable loop
        for (int j = 1; j < loop; j++)                                      // Inner Loop starts and executes from 1 to value of n, n-r and r respectively
        {
            fact[i] = fact[i]*j;                                            // Calculates factorial just by multiplying 1*2*3...till n, n-r and r times respectively each times
        }                                                                   // Inner Loops Ends
    }                                                                       // Outer Function Ends
    return fact[0]/(fact[1]*fact[2]);                                       // Returns Function By Calculating Combination using formula n!/(n-r)!*r!
}                                                                           // comb(..) funstion ends

// Do Follow Me For More Interesting Updates
// Twitter -> @NirajThakur_
// Facebook -> /Developer.Niraj