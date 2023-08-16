#include <stdio.h>

int main()
{
    /*code*/
    int n;
    scanf("%d", &n);
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= s; j++)
        {
            printf("*");
        }
        s += 2;
        printf("\n");
    }
    s -= 4;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= s; j++)
        {
            printf("*");
        }
        s -= 2;
        printf("\n");
    }

        return 0;
}