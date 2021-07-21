#include<stdio.h>
#include<conio.h>
void main()
{
    int array[] = {8,2,4,0,1,6,3};

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }

    for (int k = 0; k < 7; k++)
    {
        printf("%d ",array[k]);
    }
    getch();
    
}