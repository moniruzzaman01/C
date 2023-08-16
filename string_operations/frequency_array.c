#include <stdio.h>
#include<limits.h>

int main()
{
    /*code*/
    int n, max = INT_MIN;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(max<arr[i])
            max = arr[i];
    }
    int count[6] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d - %d\n",i, count[i]);
    }

        return 0;
}