#include<stdio.h>
int main()
{
    int dc=1;

    for (int i=1; i<=5; i++)
    {
        for (int j=i; j>=1; j--)
        {
            printf(" %d",dc);
            dc++;
        }
        printf("\n");
        
    }
    
}