#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    
    // usind for loop
    for (int i = 2; i <= N; i+=2)
    {
        printf("%d ", i);
    }

    //using while loop
    // int i = 2;
    // while (i <= N)
    // {
    //     printf("%d ", i);
    //     i+=2;
    // }

    //usinf dowhile loop
    // int i = 2;
    // do
    // {
    //     printf("%d ", i);
    //     i+=2;
    // } while (i <= N);

    return 0;
}