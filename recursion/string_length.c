#include <stdio.h>

int func(char *name, int i){
    if(name[i]=='\0')
        return 0;
    int len = func(name, i + 1);
    return len + 1;
}

int main()
{
    /*code*/
    char name[13] = "moniruzzaman";
    int length = func(name, 0);
    printf("%d", length);

    return 0;
}