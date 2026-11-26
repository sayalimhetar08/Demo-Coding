#include<stdio.h>
int main()
{
    int n, count=0, sum=0, digit;
    printf("Enter the numbers: ");
    scanf("%d", &n);
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        count++;
        n=n/10;
    }
    printf("Digits=%d, sum of digits=%d.\n", count, sum);
    return 0;
}