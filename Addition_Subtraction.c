#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a+b;
    d = a-b;
    printf("Sum = %d\n", c);
    printf("Difference = %d", d);
    return 0;
}