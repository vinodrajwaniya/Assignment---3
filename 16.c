#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an character: ");
    scanf("%c",&ch);
    if(ch>'a' && 'z'>ch)
        printf("This is lowercase");
    else if(ch>'A' && ch<'Z')
             printf("This is Uppercase");
        else if (ch>'0' && ch<'9')
                printf("This is Number");
             else 
                printf("This is Special character");
    return 0;
}