#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(j==0) 
                printf("*");
            else if(j==i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
        return 0;
}