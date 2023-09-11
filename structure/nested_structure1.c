#include <stdio.h>


struct children
{
    int children_property1;
    int children_property2;
};
struct parent_struct{
    int parent_property1;
    int parent_property2;
    struct children children_struct;
};

int main()
{
    struct parent_struct one = {10, 20, 30, 40};
    printf("%d %d\n", one.parent_property1, one.children_struct.children_property2);

    return 0;
}