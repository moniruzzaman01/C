#include<stdio.h>
int main()
{
    long long int n;
    int sum = 0;
    scanf("%lld", &n);
    while(n>0)
    {
        int a = n % 10;
        sum += a;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}
