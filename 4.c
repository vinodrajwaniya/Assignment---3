#include<stdio.h>
int main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d",&n);
    if(n&1)
        printf("%d is Odd number",n);
    else
        printf("%d is Even Number",n);
    return 0;
}