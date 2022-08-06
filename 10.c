#include<stdio.h>
int main()
{
    float sell_price,cost_price;
    float p;
    printf("Enter Cost price and Sell price ");
    scanf("%f%f",&cost_price,&sell_price);
    if(cost_price<sell_price)
    {
        p=((sell_price-cost_price)/cost_price)*100.00;
        printf("The Profit is %.2f%%",p);       
    }
    else
    {
        p=((cost_price-sell_price)/cost_price)*100.00;
        printf("The Loss is %.2f%%",p);
    }
    return 0;
}