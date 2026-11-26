#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);
    if(year>999)
    {
        if(year%4==0)
        printf("The year is leap year.\n");
        else
        printf("The year is not Leap year");
    }
    else
    printf("Invaild Year.");
    return 0;
}