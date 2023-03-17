#include <stdio.h>
#include <math.h>

int main() {
    double amount;
    int hundreds, fifties, twenties, tens, fives, ones;
    int quarters, dimes, nickels, pennies;

    printf("Enter an amount in dollars: ");
    scanf("%lf", &amount);

    // Convert dollars to an integer and subtract from amount
    int dollars = (int) floor(amount);
    amount -= dollars;

    // Convert remaining amount to cents
    int cents = (int) round(amount * 100);

    // Calculate number of bills and coins
    hundreds = dollars / 100;
    dollars %= 100;

    fifties = dollars / 50;
    dollars %= 50;

    twenties = dollars / 20;
    dollars %= 20;

    tens = dollars / 10;
    dollars %= 10;

    fives = dollars / 5;
    dollars %= 5;

    ones = dollars;

    quarters = cents / 25;
    cents -= quarters * 25;

    dimes = cents / 10;
    cents -= dimes * 10;

    nickels = cents / 5;
    cents -= nickels * 5;

    pennies = cents;

    // Print out results
    printf("Hundreds: %d\n", hundreds);
    printf("Fifties: %d\n", fifties);
    printf("Twenties: %d\n", twenties);
    printf("Tens: %d\n", tens);
    printf("Fives: %d\n", fives);
    printf("Ones: %d\n", ones);
    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickels: %d\n", nickels);
    printf("Pennies: %d\n", pennies);

    return 0;
}
