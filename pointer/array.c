#include <stdio.h>

void print(int *x){
    printf("function: %p\n", x);
}

int main()
{
    /*code*/
    int arr[5] = {4, 3, 8, 5};
    printf("%p\n", &arr[0]);
    printf("%p\n", arr);

    printf("%d\n", arr[0]);
    printf("%d\n", *arr);

    printf("%d\n", arr[1]);
    printf("%d\n", *(arr+1));

    printf("%d\n", 2[arr]);
    printf("%d\n", *(2+arr));

    return 0;
}