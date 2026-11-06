#include<stdio.h>
#include<math.h>
int main()
{
    double number, cuberoot;
    printf("Enter the number: ");
    scanf("%lf", &number);
    if(number<0)
    {
        printf("Cube root of a negative number is not defined.\n");
    }
    else
   {
       cuberoot=cbrt(number);
       printf("Cube root of %.2lf = %.2lf\n", number, cuberoot);
   }
}