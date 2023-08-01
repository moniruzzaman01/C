#include<stdio.h>
int main()
{
    int total_packet, remaining_packet, new_chocolate,total_chocolate;
    printf("Enter the number of chocolate: ");
    scanf("%d", &total_chocolate);
    total_packet = total_chocolate;
    while (total_packet > 3)
    {
        new_chocolate = total_packet / 4;
        remaining_packet = total_packet % 4;
        total_packet = new_chocolate + remaining_packet;
        total_chocolate += new_chocolate;
    }
    printf("Total number of chcolate you will get: %d\n", total_chocolate);
    return 0;
}