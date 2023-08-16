#include <stdio.h>
#include<string.h>

int main()
{
    /*code*/
    char name[20];
    // scanf("%s", name);
    // gets(name);
    fgets(name, 20, stdin);
    printf("%s", name);

    return 0;
}