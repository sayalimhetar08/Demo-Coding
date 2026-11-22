#include<stdio.h>
int main()
{
    int a, b, evaluate;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    evaluate=(a+b)*(a+b);
    printf("The result of (a+b)^2 is: %d\n", evaluate);
    return 0;
}