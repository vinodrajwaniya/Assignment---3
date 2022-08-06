#include<stdio.h>

int main()
{
    int s1,s2,s3;
    printf("Enter three sides  ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if((s1+s2>s3)&&(s2+s3>s1)&&(s3+s1>s2))
        printf("This is valid triangle ");
    else
        printf("This is not a valid triangle ");
    return 0;
}