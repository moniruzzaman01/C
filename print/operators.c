#include <stdio.h>

int main()
{
    /*code*/
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n", a,b,a-b);
    printf("%d*%d=%d\n",a,b, a*b);
    printf("%d/%d=%.2f\n",a,b, a*1.0/b);
    // float div = a*1.0 / b;
    // printf("a/b=%.2f\n", div);

    return 0;
}