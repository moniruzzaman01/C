#include <stdio.h>

int main()
{
        /*code*/
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
                scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n / 2; i++)
        {
                int temp = arr[(n - 1) - i];
                arr[(n - 1) - i] = arr[i];
                arr[i] = temp;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        return 0;
}