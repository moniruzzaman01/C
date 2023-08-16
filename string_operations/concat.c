#include <stdio.h>
#include<string.h>
//strcat inbuild function
int main()
{
    /*code*/
    char a[100], b[100];
    scanf("%s%s", a, b);
    int lenA = strlen(a), lenB = strlen(b);
    for (int i = 0; i <= lenB; i++)
    {
        a[lenA + i] = b[i];
    }

        printf("%s", a);

    return 0;
}