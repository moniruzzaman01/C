#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    // usind for loop
    // for (int i = 1; i <= N; i++)
    // {
    //     printf("%d ", i);
    // }

    //using while loop
    // int i = 1;
    // while (i <= N)
    // {
    //     printf("%d ", i);
    //     i++;
    // }

    //usinf dowhile loop
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= N);
    
    return 0;
}