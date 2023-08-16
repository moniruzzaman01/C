#include <stdio.h>
#include<string.h>

int main()
{
    /*code*/
    char str1[100], str2[100];
    scanf("%s%s", str1, str2);
    int i = 0;
    while (1)
    {
        if(str1[i]=='\0'&&str2[i]=='\0')
        {
            printf("%s = %s", str1, str2);
            break;
        }
        else if(str1[i]=='\0')
        {
            printf("%s < %s", str1, str2);
            break;
        }
        else if(str2[i]=='\0')
        {
            printf("%s > %s", str1, str2);
             break;
        }
        if(str1[i]==str2[i])
        {
            i++;
        }
        else if(str1[i]>str2[i])
        {
            printf("%s > %s", str1, str2);
            break;
        }
        else
        {
            printf("%s < %s", str1, str2);
            break;
        }
    }
    // printf("%s = %s", str1, str2);
    return 0;
}