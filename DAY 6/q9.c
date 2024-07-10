#include<stdio.h>
int main()
{

    int col;
    for (int row = 5; row>= 1; row--)
    {
        for (int col= 1; col<=row; col++)
        {
            printf(" %d",col);
        }

        for (int space= (5-row)*2; space>=1; space--)
        {
            printf("  ");
        }     
        printf("\n");
    }

for (int row = 2; row<= 5; row++)
    {
        for (int col= 1; col<=row; col++)
        {
            printf(" %d",col);
        }

        for (int space= (5-row)*2; space>=1; space--)
        {
            printf("  ");
        }     
        printf("\n");
    }
}