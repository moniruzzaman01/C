#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[15];
    arr[0] = 1;
    for (int i = 1; i < 14; i++)
    {
        arr[i] = arr[i - 1] * 2;
    }
    for (int i = 0; i < 14; i++)
    {
        printf("%d ", arr[i]);
    }
        return 0;
}
