#include <stdio.h>

int main()
{
    /*code*/
    int arr[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if(i==1){
            for (int j = 0; j < 5; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }

        return 0;
}