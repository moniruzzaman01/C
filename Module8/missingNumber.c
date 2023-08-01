#include<stdio.h>
int main()
{
    int n,temp;
    int arr[200001];
    scanf("%d", &n);
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &temp);
        arr[temp - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0) printf("%d ", i+1);
    }
    return 0;
}