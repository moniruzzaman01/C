#include <stdio.h>

void print_array(int *a, int n, int i){
    if (i == n)
        return;
    print_array(a, n, i + 1);
    printf("%d ", *(a + i));
}

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
    print_array(arr, n, 0);

    return 0;
}