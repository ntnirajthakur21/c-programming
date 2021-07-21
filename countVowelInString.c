#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str, 100, stdin);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' ||str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
           count++;
       }
    }
    printf("Total vowel are %d",count);
}