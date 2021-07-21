#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 1080;
    int *p;
    p = &a;
    printf("The value of a %d\n",a);
    printf("The value of a %d\n",*p);
    printf("The address of a %u\n",&a);
    printf("The address of p %u\n",&p);

}