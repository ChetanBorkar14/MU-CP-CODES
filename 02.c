//Write a C program to enter length and breadth of a rectangle and find its perimeter and area.
#include <stdio.h>

int main()
{
    int length, breadth, perimeter;

    printf("Enter length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%d", &breadth);

    perimeter = 2 * (length + breadth);

    printf("Perimeter of rectangle = %d units ", perimeter);

    return 0;
}
