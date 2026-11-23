#include<stdio.h>
int main()
{
    int num1, num2, num3, num4, num5, percentage;
    printf("Enter the Marks of Math: ");
    scanf("%d", &num1);
    printf("Enter the Marks of Physic: ");
    scanf("%d", &num2);
    printf("Enter the Marks of Chemistry: ");
    scanf("%d", &num3);
    printf("Enter the Marks of GUI: ");
    scanf("%d", &num4);
    printf("Enter the Marks of FCP: ");
    scanf("%d", &num5);
    percentage=((num1+num2+num3+num4+num5)/500)*100;
    printf("The Percentage is: %d\n", percentage);
    return 0;
}