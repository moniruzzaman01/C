#include <stdio.h>

struct square
{
    int height;
    int width;
};
struct square1
{
    int height;
    int width;
};
typedef struct square1 square1;

int main()
{
    // square one = {10, 20};//won't work
    int x;
    scanf("%d", &x);
    struct square one = {x, 20};
    printf("%d %d\n", one.height, one.width);
    square1 two = {30, 40};//working
    printf("%d %d\n", two.height, two.width);

    return 0;
}