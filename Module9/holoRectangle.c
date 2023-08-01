#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //print first line
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
    // print middle lines
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j==0)
                printf("*");
            else if(j==n-1)
                printf("*");
            else
                printf(" ");
            // printf("*");
        }
        printf("\n");
    }
        // print last line
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
}