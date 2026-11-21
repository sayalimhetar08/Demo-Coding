#include<stdio.h>
int main ()
{
    int length, breadth, area, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);
    area = length*breadth;
    printf("Area: %d\n", area);
    perimeter = (2*length)+(2*breadth);
    printf("Perimeter: %d.\n", perimeter);
    return 0;
}