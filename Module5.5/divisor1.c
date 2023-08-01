#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    // using for loop
    // for (int i = 1; i <= N; i++)
    // {
    //     if(N%i==0)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    // using while loop
    // int i = 1;
    // while (i <= N)
    // {
    //     if(N%i==0)
    //     {
    //         printf("%d ", i);
    //     }
    //     i++;
    // }

    // using dowhile loop
    int i = 1;
    do
    {
        if(N%i==0)
        {
            printf("%d ", i);
        }
        i++;
    } while (i <= N);

    return 0;
}