// C program to check if integer given by user is armstrong number or not.
// Armstrong Number is a number that is the sum of its own digits each raised to the power of the number of digits.
// Example: let a number be 153 then  total digits = 3 if the sum of the power of each number with power 3 will equal to 153 then it's Armstrong Number

// - Niraj Kumar Thakur

#include<stdio.h>                                             // Including headers files used
#include<conio.h>                                             // Including headers files used
#include<math.h>                                              // Including headers files used
void main()                                                   // Main Function starts
{
    int num, num2, digit = 0, sum = 0;                        // declaring variables 
    int nums[]={1,2,3,4,5};                                   // declaring array to store each digits
    printf("Enter any number :");                             // print's message
    scanf("%d",&num);                                         // Asks user to enter a number
    num2 = num;                                               // assign/copy number that user inputs to num2 variable
    while(num2 != 0)                                          // While loop executes till the num doesn't equal to zero
    {
        nums[digit] = num2%10;                                // storing last digit of number in array at 0th index, 2nd last at 1st index ..so on
        digit++;                                              // increasing the value of digits by 1
        num2=num2/10;                                         // updating number by removing it's last digit   
    }
    for (int i = 0; i < digit; i++)                           // For Loop starts
    {
        sum = sum + pow(nums[digit - (i+1)], digit);          // Finding sum of digits with power of total dig12its
    }
    if(num == sum)                                           // checks if sum and input number matches or not
    {
        printf("The number is armstrong number");             //If matches then print's this message
    }
    else
    {
        printf("The number is not armstrong number");         //If not matches then print's this message
    }
    getch();                                                  // Inputs a character from user that hold the program to see result
}                                                             // End of main Function