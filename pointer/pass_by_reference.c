#include <stdio.h>

//call by value
int sqr(int x){
    return x * x;
}
//call by reference
int sqr1(int *m){
    printf("%p\n", m);
    printf("%d\n", *m);
    *m += 2;
    return 0;
}

int main()
{
    /*code*/
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", n);
    int result = sqr(n);//call by value
    printf("%d\n", result);
    sqr1(&m);//call by reference
    printf("m%d\n", m);

    return 0;
}