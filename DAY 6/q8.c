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
        for (int col= row; col>=1; col--)
        {
            printf(" %d",col);
        }     
        printf("\n");
    }

     for (int row = 1; row<= 5; row++)
    {
        for (int col= 1; col<=row; col++)
        {
            printf(" %d",col);
        }

        for (int space= (5-row)*2; space>=1; space--)
        {
            printf("  ");
        } 
        for (int col= row; col>=1; col--)
        {
            printf(" %d",col);
        }     
        printf("\n");
    }
    
}