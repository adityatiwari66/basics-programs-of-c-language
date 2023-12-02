#include <stdio.h>
#include <conio.h>
int main()
{
    float income, tax;
    printf("enter your income");
    scanf("%f", &income);
    if (income <= 500000 && income > 250000)
    {
        tax = ((income-250000)*5/100);
    }
    if (income <= 1000000 && income > 500000)
    {
        tax = ((income-250000)*10/100);
    }
    if (income > 1000000)
    {
        tax = ((income-250000)*30/100);
    }

    printf("you have to pay %f tax on your income", tax);
    return 0;
}
