#include <stdio.h>
#include<string.h>
//strcmp build in function
int main()
{
    /*code*/
    char str1[100], str2[100];
    scanf("%s%s", str1, str2);
    int i = 0;
    while (1)
    {
        if(strlen(str1)!=strlen(str2)){
            if(strlen(str1) < strlen(str2))
                printf("%s < %s", str1, str2);
            else
                printf("%s > %s", str1, str2);
            break;
        }
        else if(str1[i]=='\0' && str2[i]=='\0'){
            printf("%s = %s", str1, str2);
            break;
        }
        else if(str1[i]<str2[i]){
            printf("%s < %s", str1, str2);
            break;
        }
        else if(str1[i]>str2[i]){
            printf("%s > %s", str1, str2);
            break;
        }
        i++;
    }

    // printf("%s = %s", str1, str2);
    return 0;
}