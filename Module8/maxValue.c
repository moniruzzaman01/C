#include<stdio.h>
int main()
{
    int ar[5];
    for (int i = 0; i < 5;i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = ar[0];
    for (int i = 0; i < 5; i++)
    {
        if(max<ar[i]){
            max = ar[i];
        }
    }
    printf("%d\n", max);
    return 0;
}