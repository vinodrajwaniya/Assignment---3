#include<stdio.h>
int main()
{
    int n;
    printf("Enter an Number: ");
    scanf("%d",&n);
    if(n%7==0 || n%3==0)
        printf("%d is divided by 7 and 3",n);
    else
        printf("%d is not divided by 7 and 3",n);
    return 0;
}