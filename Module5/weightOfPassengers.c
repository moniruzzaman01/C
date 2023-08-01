#include<stdio.h>
int main()
{
    int n,sum=0,a;
    printf("Enter passenger number: ");
    scanf("%d", &n);
    for (int i = 0; i < n;i++)
    {
        printf("Enter the weight of passenger no %d: ", i+1);
        scanf("%d", &a);
        sum += a;
    }
    printf("The total weight of all passengers are: %d\n", sum);
    return 0;
}