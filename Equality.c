#include<stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter the Two numbers: ");
    scanf("%d %d", &num1, &num2);
   if (num1==num2)
    {
        printf("Both NUmbers are Equal");
    }
    else
    {
        printf("Numbers are Not Equal.");
    }
    return 0;
}