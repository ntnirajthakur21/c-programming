#include<stdio.h>
#include<conio.h>
void main()
{
    float arr[] = {0};
    float sum=0;
    char oper;
    while (oper != '=')
    {
        int i = 0;
        scanf("%f",&arr[i]);
        oper = getch();
        sum = sum + arr[i];
        i++;
    }
    
    printf("Sum = %.2f", sum);
    getch();
}