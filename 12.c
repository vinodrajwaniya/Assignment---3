#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an character: ");
    scanf("%c",&ch);
    if(ch>'a'&&'z'>ch)
        printf("This is lowercase");
    else
        printf("This is Uppercase");
    return 0;
}