#include<stdio.h>
int main(int argc, char const *argv[])
{
    // creating a loop iterating from 0 to 126
    for (char i = 0; i <= 126; i++) {
        printf("The ASCII value of %c is %d \n", i, i);
    }
    return 0;
}
