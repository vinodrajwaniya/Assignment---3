#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number's: ");
    scanf("%d%d",&a,&b);
    if(a>=b)
        printf("Greater no is %d",a);
    else
        printf("Greater no is %d",b);
    return 0;
}
            