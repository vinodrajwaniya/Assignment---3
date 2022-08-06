
#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    if(n==1)
        printf("Number of days in that month is 31");
    else if(n==2)
        printf("Number of days in that month is 28");
    else if(n==3)
        printf("Number of days in that month is 31");
    else if(n==4)
        printf("Number of days in that month is 30");
    else if(n==5)
        printf("Number of days in that month is 31");
    else if(n==6)
        printf("Number of days in that month is 30");
    else if(n==7)
        printf("Number of days in that month is 31");
    else if(n==8)
        printf("Number of days in that month is 31");
    else if(n==9)
        printf("Number of days in that month is 30");
    else if(n==10)
        printf("Number of days in that month is 31");
    else if(n==11)
        printf("Number of days in that month is 30");
    else if(n==12)
        printf("Number of days in that month is 31");
    else if(12<n)
        printf("This is not a valid months");

    return 0;
}

