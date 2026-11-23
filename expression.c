#include<stdio.h>
int main()
{
    int a, b, result;
    printf("Enter the Two numbers: ");
    scanf("%d %d", &a, &b);
    result=((a+b)*(a-b));
    printf("The Result is: %d.\n", result);
    return 0;
}