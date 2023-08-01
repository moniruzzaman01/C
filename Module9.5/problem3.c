#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n];
    //take an integer array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //check the conditions
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[0]!= arr[i])
        {
            sum += 1;
            break;
        }
    }
    //print the expected result
    if(sum==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

        return 0;
}
