#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float rate, fre,rate_decimal;
    float amt, principal, time, power;



    clrscr();

    // User input
    printf("Please enter the principal amount:\n");
    scanf("%f", &principal);

    printf("Please enter the rate of interest (in percentage):\n");
    scanf("%f", &rate);

    printf("Please enter the tenure (in years):\n");
    scanf("%f", &time);

    printf("Please enter the frequency for compounding (e.g., 4 for quarterly):\n");
    scanf("%f", &fre);

    // Convert rate percentage to decimal form
    rate_decimal = rate / 100.0;

    // Calculate power (n * t)
    power = fre * time;

    // Calculate compound interest amount
    amt = principal * pow((1 + rate_decimal / fre), power);

    // Output the total amount after interest
    printf("Total amount after compound interest is: %.2f\n", amt);

    getch();
    return 0;
}
