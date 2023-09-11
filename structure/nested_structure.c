#include <stdio.h>

struct parent_struct{
    int property1;
    int property2;
    struct children//in this structure variable should be declared
    {
        int property3;
        int property4;
    } children_struct;

    // struct children children_struct;//will thorow an warning;
};

int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    struct parent_struct one = {a, b, c, d};
    printf("%d %d\n", one.property1, one.children_struct.property4);

    return 0;
}