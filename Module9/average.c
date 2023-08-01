#include<stdio.h>
int main()
{
    for (int i = 0; i < 2; i++)
    {
        int avg, sum = 0;
        for (int i = 0; i < 3; i++)
        {
            int marks;
            scanf("%d", &marks);
            sum += marks;
        }
        avg = sum / 3;
        printf("%d %d\n", i+1,avg);
    }
}