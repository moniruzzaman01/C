#include<stdio.h>

int main()
{
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    //-------------
    // float area;
    // area = 3.1416 * radius * radius;
    //-------------
    float area = 3.1416 * radius * radius;
    //-------------
    printf("The area of the circle is: %f\n", area);
    //-------------
    printf("The area of the circle is: %f\n", (3.1416*radius*radius));

    return 0;
}