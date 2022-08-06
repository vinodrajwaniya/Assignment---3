#include<stdio.h>
int main()
{
    int a,b,c,k=0;
    printf("Enter A's multiply B's multiply C's multiply :");
    scanf("%d%d%d",&a,&b,&c);
    k=b*b-(4*a*c);
    if(k>0)
        printf("Quadratic equation are real & distinct");
    else if(k<0)
            printf("Quadratic equation are real & equal");
        else
            printf("Quadratic equation are imaginary roots");
    return 0;  

}