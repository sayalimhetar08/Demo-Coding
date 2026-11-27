#include<stdio.h>
int main()
{
    int n;
    for(n=1; n<=10; n++);
    {
    if(n%5==0 && n%7==0);
    printf("First number divisible by 5 and 7: %d.\n", n);
    break;
    }
    return 0;
}