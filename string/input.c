#include <stdio.h>

int main()
{
    /*code*/
    char name[20];
    for (int i = 0; i < 20; i++)
    {
        scanf("%c", &name[i]);
    }
    //output one
    // for (int i = 0; i < 19; i++)
    // {
    //     printf("%c", name[i]);
    // }
    
    //output two
    printf("%s", name);

        return 0;
}