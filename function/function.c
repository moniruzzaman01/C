#include <stdio.h>

//return with parameter
int sum(int a, int b){
    return a + b;
}
//return with no-parameter
int sum1(){
    int a, b;
    scanf("%d%d", &a, &b);
    return a + b;
}
int sum2(void){
    int a, b;
    scanf("%d%d", &a, &b);
    return a + b;
}
//no-return with no-parameter
//no-return with parameter

int main()
{
    /*code*/
    int a, b;
    scanf("%d%d", &a, &b);
    int result = sum(a, b);
    int result1 = sum1();//I can send paramters here but it'll show warning
    // int result2 = sum2(a, b);//I can't send paramters here
    printf("%d %d", result,result1);

    return 0;
}