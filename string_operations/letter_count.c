#include <stdio.h>
#include<string.h>

int main()
{
    /*code*/
    char word[100000000];
    scanf("%s", word);
    int count[26] = {0};
    for (int i = 0; i < strlen(word); i++)
    {
        int x = word[i];
        count[x - 97]++;
        // printf("%d %c\n", x-97, word[i]);
    }
    for (int i = 0; i < 25; i++)
    {
        if (count[i] != 0)
            printf("%c -> %d\n", i + 97, count[i]);
    }

        return 0;
}