#include <stdio.h>

int main()
{
    /*code*/
    int n;
    scanf("%d", &n);
    int gap = n - 1, star = 1;
    for (int i = 1; i <= (2 * n); i++)
    {
        for (int j = 1; j <= gap; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        if(i<n){
            gap--;
            star += 2;
        }else if(i>n){
            gap++;
            star -= 2;
        }
        printf("\n");
    }

        return 0;
}