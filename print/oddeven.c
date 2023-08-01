#include <stdio.h>

int main()
{
    /*code*/
    int a;
    scanf("%d", &a);
    if(a<=0)
        printf("enter a valid number");
    else if(a%2==0)
        printf("given number is even");
    else
        printf("given number is odd");

    return 0;
}