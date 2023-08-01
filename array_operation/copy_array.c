#include <stdio.h>

int main()
{
    /*code*/
    int m, n;
    scanf("%d", &m);
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n);
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //main part
    int arr[m + n];
    for (int i = 0; i < m + n; i++)
    {
        if(i<=m-1)
            arr[i] = arr1[i];
        else
            arr[i] = arr2[i-m];
    }
    // output
    for (int i = 0; i < m+n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}