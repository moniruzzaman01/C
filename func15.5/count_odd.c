#include <stdio.h>

int change_it(){
        int n;
        scanf("%d", &n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
                int x;
                scanf("%d", &x);
                if(x%2!=0)
                        count++;
        }
        return count;
}

int main()
{
        /*code*/
        int result = count_odd();
        printf("%d", result);

        return 0;
}