#include <stdio.h>

void hello(int *p,int sz){//have to sent the array size
    for (int i = 0; i < sz; i++){
        printf("%d %d\n", p[i], *(p + i));
    }
}

int main()
{
    /*code*/
    int arr[5] = {4, 5, 3, 8, 2};
    // hello(&arr[0],5);
    // hello(&0 [arr],5);
    hello(arr,5);

    return 0;
}