#include <stdio.h>

void fun(int a){
    if (a == 0)
        return;//exit point
    fun(a - 1);
    printf("%d ", a);
}

int main()
{
    /*code*/
    fun(5);

    return 0;
}