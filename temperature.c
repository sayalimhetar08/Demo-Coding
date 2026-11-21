#include<stdio.h>
int main()
{
    float celsius, fehrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fehrenheit = (celsius * 9/5) + 32;
    printf("%f Celsius = %f Fehrenheit", celsius, fehrenheit);
    return 0;
}