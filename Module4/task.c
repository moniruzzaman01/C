#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i != 1; i = n)
    {
        printf("%d\n", n);
        if(n%2==0)
        {
            n = n / 2;
        }
        else
        {
            n = (3 * n) + 1;
        }
    }
    return 0;
}