#include<stdio.h>
int main()
{
    int year;
    printf("Enter an year: ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
            printf("This is leap Year");
        else 
            printf("This is not a leap year");
    }
    else 
    {
        if(year%4==0)
            printf("This is leap Year");
        else 
            printf("This is not a leap year");
    }
    return 0;
}