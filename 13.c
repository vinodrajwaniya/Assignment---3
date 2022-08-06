#include<stdio.h>
int main()
{
    int n;
    printf("Enter an Number: ");
    scanf("%d",&n);
    if(n%3==0 && n%2==0)
        printf("%d is divided by 3 and 2",n);
    else
        printf("%d is not divided by 3 and 2",n);
    return 0;
}