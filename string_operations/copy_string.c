#include <stdio.h>
#include<string.h>

int main()
{
    /*code*/
    char arr1[100], arr2[100], arr3[100];
    scanf("%s%s%s", arr1, arr2, arr3);
    printf("arr1: %s\n", arr1);
    for (int i = 0; i <= strlen(arr2); i++)
    {
        arr1[i] = arr2[i];
    }
    printf("manual: %s\n", arr1);
    strcpy(arr1, arr3);
    printf("IBF: %s", arr1);

    return 0;
}