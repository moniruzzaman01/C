#include <stdio.h>

int main()
{
        /*code*/
        int n;
        scanf("%d", &n);
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
                scanf("%d", &arr[i]);
        }
        int val, pos;
        scanf("%d%d", &pos, &val);
        for (int i = n; i >= 0; i--)
        {
                if (i == pos){
                        arr[i] = val;
                        break;
                }
                else
                        arr[i] = arr[i - 1];
        }
        for (int i = 0; i <= n; i++)
        {
                printf("%d ", arr[i]);
        }

                return 0;
}