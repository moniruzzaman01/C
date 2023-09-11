#include <stdio.h>

struct square
{
    int height;
    int width;
} one, two={10,20}, three={.width=40,.height=50};

int main()
{
    one.height = 10;
    one.width = 20;
    printf("%d %d\n", one.height, one.width);
    printf("%d %d\n", two.height, two.width);
    printf("%d %d\n", three.height, three.width);

    return 0;
}