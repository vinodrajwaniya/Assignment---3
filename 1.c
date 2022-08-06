#include<stdio.h>

int main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d",&n);
    if(n>0)
        printf("%d is Positive Number",n);
    else
        printf("%d is Non-Positive",n);
    return 0;
}