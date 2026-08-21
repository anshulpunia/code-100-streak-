#include <stdio.h>

int main() {
    int days, fine = 0;

    // Ask user for the number of late days
    printf("Enter the number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Thank you for returning the book on time!\n");
    } 
    else if (days <= 5) {
        fine = days * 2;
        printf("Your total fine is: Rs. %d\n", fine);
    } 
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Your total fine is: Rs. %d\n", fine);
    } 
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Your total fine is: Rs. %d\n", fine);
    } 
    else {
        // More than 30 days
        printf("You are late by more than 30 days. Membership Cancelled.\n");
    }

    return 0;
}
