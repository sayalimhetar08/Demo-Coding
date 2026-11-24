#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    if((num/5)&&(num/11))
    {
    printf("The Number is Divisible by both.");
    }
    else
    {
        printf("The Number is not Divisible by both.");
    }
    return 0;
}
