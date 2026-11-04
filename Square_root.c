#include<stdio.h>
#include<math.h>
int main()
{
    double number, squareRoot;
    printf("Enter a number to find its Square root: ");
    scanf("%lf", &number);
    if(number<0)
    {
        printf("Square root of a negative number is not defined in real numbers.\n");
    }
    else
    {
        squareRoot = sqrt(number);
        printf("Square root of %.2lf = %.2lf\n", number, squareRoot);
    }
}