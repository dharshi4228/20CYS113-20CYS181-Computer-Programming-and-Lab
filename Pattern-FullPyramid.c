#include<stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    if (n<1 || n>24)
    {
        printf("Invalid Input");
    }
    else
    {
        for (int i=0; i<n; i++)
        {
            for (int j=n-i; j >1 ; j-- )
            {
                printf("  ");
            }
            for (int j=0; j<2*i+1 ; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}