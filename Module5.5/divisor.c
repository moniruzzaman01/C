#include<stdio.h>
int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    // using for loop
    // for (int i = 1; i <= N; i++)
    // {
    //     if(i%M==0)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    // using while loop
    // int i = 1;
    // while (i <= N)
    // {
    //     if(i%M==0)
    //     {
    //         printf("%d ", i);
    //     }
    //     i++;
    // }

    // using dowhile loop
    int i = 1;
    do
    {
        if(i%M==0)
        {
            printf("%d ", i);
        }
        i++;
    } while (i <= N);

    return 0;
}