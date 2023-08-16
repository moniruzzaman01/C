#include <stdio.h>

int main()
{
    /*code*/
    int n, s, g;
    scanf("%d", &n);
    s = 1, g = n - 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 0; j < g; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < s; j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<n)
        {
            g--;
            s += 2;
        }
        else{
            g++;
            s -= 2;
        }
    }

        return 0;
}