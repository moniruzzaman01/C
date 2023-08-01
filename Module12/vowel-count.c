#include<stdio.h>
int main(int argc, char const *argv[])
{
    char word[100];
    int count = 0;
    fgets(word, sizeof(word), stdin);
    for (int i = 0; word[i]!='\0' ;i++)
    {
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
