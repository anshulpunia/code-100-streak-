#include <stdio.h>

int main() {
    float units, bill = 0.0;

    // Ask user for the units consumed
    printf("Enter total units consumed: ");
    scanf("%f", &units);

    // Calculate the bill based on tiers
    if (units <= 0) {
        bill = 0.0;
    } 
    else if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Print the final calculated bill
    printf("Your total electricity bill is: Rs. %.2f\n", bill);

    return 0;
}