#include <stdio.h>

int main()
{
    /*code*/
    int a;
    scanf("%d", &a);
    if(a>=10000){

        printf("gucci bag\n");
        if(a>20000)
            printf("gucci belt");
    }
    else if(a>=5000)
        printf("levis bag");
    else
        printf("something");

    return 0;
}