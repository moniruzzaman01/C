#include <stdio.h>

int main()
{
    /*code*/
    int n;
    scanf("%d", &n);
    int arr[n], p, result = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &p);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==p)
            {
                result = 1;
            }
        }
    }
    if(result)
        printf("possible");
    else
        printf("not possible");

        return 0;
}