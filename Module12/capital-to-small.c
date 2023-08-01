#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[100];
    fgets(name, sizeof(name), stdin);
    int i = 0;
    while (name[i]!='\0')
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            name[i] += 32; //add 32 to make it lower and subtract 32 to make it capital
        }
        i++;
    }

    printf("%s", name);
    return 0;
}
