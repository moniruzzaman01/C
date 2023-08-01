#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int q;
    scanf("%d", &q);
    for (int j = 1; j <= q; j++)
    {
        int i, v;
        scanf("%d%d", &i, &v);
        arr[i] += v;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

        return 0;
}
