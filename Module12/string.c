#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[100];
    // taking input using scanf
    // scanf("%s", name);

    //taking input using gets
    // gets(name); ///deprecated now. replaced with fgets()

    //taking input using fgets()
    fgets(name, sizeof(name), stdin);

        printf("%s\n", name);
    return 0;
}
