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
    int count = 0, target;
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                count += 1;
                break;
            }
        }
    }
    //print the expected result
    if(count==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

        return 0;
}
