#include<stdio.h>
int main()
{
int a, b, c, d;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
c=a*b;
d=a/b;
printf("Product is %d.\n", c);
printf("Division is %d.\n", d);
return 0;
}