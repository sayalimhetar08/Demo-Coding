#include<stdio.h>
int main()
{
    int number, cube;
    printf("Enter the number: ");
    scanf("%d", &number);
    cube = number*number*number;
    printf("Cube of a number: %d", cube);
    return 0;
}