#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n];
    //take an integer array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++ )
    {
        printf("%d - ",arr[i]);
        for (int j = 0; j < n; j++)
        {
            if(i==j) continue;
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

        return 0;
}
