#include<stdio.h>
int main()
{
    for (int row=1; row<=5; row++)
    {

        for (int i=5; i>=row; i--)
        {
            printf("  ");
        }
        
        for (int col=1; col<=row; col++)
        {
            printf(" %d",col);
        }

         for (int col= row-1; col>=1; col--)
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