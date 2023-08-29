#include <stdio.h>

void print_array(int *a, int n){
    if(n==0)
        return;
    print_array(a, n - 1);
    printf("%d ", *(a + (n - 1)));
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
    print_array(arr,n);

    return 0;
}