#include<stdio.h>
#include<conio.h>

int add(int matA[][2], int matB[][2])
{
    int matC[2][2] = {
        {0, 0},
        {0, 0}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
        
    }

    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("%d ",matC[k][l]);
        }
        printf("\n");
    }
}

void main()
{
    int 
    matA[2][2] = {
        {1, 0},
        {0, 1}
    },

    matB[2][2] = {
        {3, 4},
        {5, 7}
    };

    
}