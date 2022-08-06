#include<stdio.h>
int main()
{
    int a,b,c,d,e,k=0;
    printf("Enter Marks of 5 subject's:  ");
    scanf("%a%b%c%d%e",&a,&b,&c,&d,&e);// problem in this line
    k=(a+b+c+d+e);
    if(k>33)
        printf("Student Pass With %d",k);
    else
        printf("Student Fail with %d",k);
    return 0;   
}