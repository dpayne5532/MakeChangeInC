#include <stdio.h>
#include <math.h>

/*
compile with GNU
gcc -o exeName makeChange.c -lm

-lm is required to use math library functions floor() and round()

*/

// main() is the entry point to the program
int main() {

  // Decalre variables
  double amount;
  int hundreds, fifties, twenties, tens, fives, ones;
  int quarters, dimes, nickels, pennies;

  printf("\n---===|||  MakeChange takehome project for CEL by Dan Payne |||===---\n\n");
  printf("Enter an amount in dollars/cents($xxx.xx): $");

  // Request user input
  // %lf represents the Double value, the '&' in '&amount' refers to the memory address of the Double.
  scanf("%lf", &amount);

  // Convert dollars to an integer and subtract from amount
  // floor() rounds but always down
  // floor(amount) will return a double - (int) will typecast that double to int.
  int dollars = (int) floor(amount);
  amount -= dollars;

   // Convert remaining amount to cents
  int cents = (int) round(amount * 100);

  // Calculate number of bills and coins
  // Hundreds equals dollars value divided by 100
  hundreds = dollars / 100;
  // Dollars variable turns itself into the remainder of dollars/100 using the modulo operator.
  dollars %= 100;

  // Rinse, repeat
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
  if (hundreds != 0){
    printf("Hundreds: %d\n", hundreds);
  }
  if (fifties != 0) {
    printf("Fifties: %d\n", fifties);
  }
  if (twenties != 0) {
    printf("Twenties: %d\n", twenties);
  }
  if (tens != 0) {
    printf("Tens: %d\n", tens);
  }
  if (fives != 0) {
    printf("Fives: %d\n", fives);
  }
  if (ones != 0) {
    printf("Ones: %d\n", ones);
  }
  if (quarters != 0) {
    printf("Quarters: %d\n", quarters);
  }
  if (dimes != 0) {
    printf("Dimes: %d\n", dimes);
  }
  if (nickels != 0){
    printf("Nickels: %d\n", nickels);
  }
  if (pennies != 0) {
    printf("Pennies: %d\n", pennies);
  }
  // return 0 just means the program was executed successfully. A return 1 would be unsuccessful.
  return 0;
}
