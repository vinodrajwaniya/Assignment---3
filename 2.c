#include<stdio.h>

int main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d",&n);
    if(n%5==0)
        printf("%d is Divided by 5",n);
    else
        printf(" %d is not divided by 5",n);
    return 0;
}