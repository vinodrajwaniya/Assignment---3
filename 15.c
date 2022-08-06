#include<stdio.h>
int main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d",&n);
    if(n>0)
        printf("%d is positive",n);
    else if(n<0)
            printf("%d is Negative",n);
        else
            printf("Number is Zero");
    return 0;
}