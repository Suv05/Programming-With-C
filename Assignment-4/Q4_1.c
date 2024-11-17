// Write a program for an automatic teller machine that dispenses money. The user should enter
// the amount desired (a multiple of 10 dollars) and the machine dispenses this amount using
// the least number of bills. The bills dispensed are 50s, 20s, and 10s. Write a function that
// determines how many of each kind of bill to dispense.

#include <stdio.h>

void dispense(int amount, int *twenty_count, int *fifty_count, int *ten_count)
{
    *fifty_count = amount / 50;
    amount = amount % 50;

    *twenty_count = amount / 20;
    amount = amount % 20;

    *ten_count = amount / 10;
    amount = amount % 10;
}
int main()
{
    int amount, twenty_count, fifty_count, ten_count;
    printf("Enter the amount to be dispensed: ");
    scanf("%d", &amount);

    if (amount % 10 != 0 || amount < 0)
    {
        printf("Invalid amount\n");
        return 1;
    }

    dispense(amount, &twenty_count, &fifty_count, &ten_count);

    printf("Dispensed %d bills:\n", amount);
    printf("%d 20s\n", twenty_count);
    printf("%d 50s\n", fifty_count);
    printf("%d 10s\n", ten_count);

    return 0;
}
