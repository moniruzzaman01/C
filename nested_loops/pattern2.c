#include <stdio.h>

int main()
{
    /*code*/
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int k = n - i;
        while (k)
        {
            printf(" ");
            k--;
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n; i > 0; i--)
    {
        int k = n - i;
        while (k)
        {
            printf(" ");
            k--;
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

        return 0;
}