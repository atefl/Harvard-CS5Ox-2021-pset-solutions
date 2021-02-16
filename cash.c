#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main()

{
    float dollar;
    int cents;
    // Prompts the user to input the amount owed (in dollars)
    do
    {
        dollar = get_float("change: ");
        cents = round(dollar * 100);
    }
    while (dollar < 0.0);
    // Initialize the number of coins (zero initially)
    int coins = 0;
    // Increments the coins count if the owed amount is greater than 25 cents
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }
    // Increments the coins count if the owed amount is less than 25 cents and greater than 10 cents
    while (cents >= 10 && cents < 25)
    {
        cents = cents - 10;
        coins++;
    }
    // Increments the coins count if the owed amount is less than 10 cents and greater than 5 cents
    while (cents >= 5 && cents < 10)
    {
        cents = cents - 5;
        coins++;
    }
    // Increments the coins count if the owed amount is less than 5 cents and greater than 1 cent
    while (cents >= 1 && cents < 5)
    {
        cents = cents - 1;
        coins++;
    }
    // Prints the number of coins used to return the change
    printf("change owed: %i", coins);
}
