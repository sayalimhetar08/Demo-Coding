#include<stdio.h>
#include<math.h>
int main()
{
    double number, square;
    printf("Enter the number:");
    scanf("%lf", &number);
    square=number*number;
    printf("square of a number:%lf", square);
    return 0;
}