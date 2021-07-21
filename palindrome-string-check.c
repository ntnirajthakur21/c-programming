#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[100];
    char str2[100];
    printf("Enter the first string : ");
    scanf("%s",str1);
    printf("Enter the second string : ");
    scanf("%s",str2);
    if (strcmp(str1, strrev(str2)) == 0)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("Int is not palindrome");
    }
}