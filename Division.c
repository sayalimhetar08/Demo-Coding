#include<stdio.h>
int main()
{
    int num1, num2, quotient, reminder;
    printf("Enter the Numretor: ");
    scanf("%d", &num1);
    printf("Enter the Denominator: ");
    scanf("%d", &num2);
    quotient=num1/num2;
    printf("The Quotient is: %d\n", quotient);
    reminder=num1%num2;
    printf("The Reminder is: %d\n", reminder);
    return 0;
}