#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("You are too young to vote.\n");
    }
    else if (age >= 18 && age < 21)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are too old to vote.\n");
    }

    return 0;
}