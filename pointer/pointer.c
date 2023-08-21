#include <stdio.h>

int main()
{
    /*code*/
    int x;
    scanf("%d", &x);
    printf("%d\n", x);//print actual value
    int *p = &x;//getting address of x
    printf("%p\n", p);//printing address of x
    printf("%d\n", *p);//printing actual value  of x using pointer
    *p = 120;//change actual value of x using pointer
    printf("%d\n", x);

    return 0;
}