#include<stdio.h>
#include<conio.h>
void main()
{
    int row =5;
    for(int x=0; x<row; x++)
    {
        for(int y=row-0; y>=x; y--)
        {
            printf(" ");
        }
        for(int z=0; z<=x; z++)
        {
            printf("* ");
        }
        printf("\n");
    }
}