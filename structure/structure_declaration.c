#include <stdio.h>

struct square
{
    int height;
    int width;
};

int main()
{
    //declaration type one
    struct square one;
    one.height = 10;
    one.width = 20;
    //declaration type two
    struct square two = {30, 40};
    //declaration type three
    struct square three = {.width = 50, .height = 60};

    printf("%d %d\n", one.height, one.width);
    printf("%d %d\n", two.height, two.width);
    printf("%d %d\n", three.height, three.width);

    return 0;
}