#include <stdio.h>

int main() {
    float cost_price, selling_price, amount, percentage;

    // Prompt user for input
    printf("Enter Cost Price (CP): ");
    scanf("%f", &cost_price);
    
    printf("Enter Selling Price (SP): ");
    scanf("%f", &selling_price);

    // Check if cost price is 0 to avoid division by zero error
    if (cost_price <= 0) {
        printf("Invalid input! Cost price must be greater than 0.\n");
        return 1;
    }

    // Calculate Profit or Loss
    if (selling_price > cost_price) {
        amount = selling_price - cost_price;
        percentage = (amount / cost_price) * 100;
        printf("\nYou made a PROFIT!\n");
        printf("Profit Amount: %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", percentage);
        
    } else if (cost_price > selling_price) {
        amount = cost_price - selling_price;
        percentage = (amount / cost_price) * 100;
        printf("\nYou incurred a LOSS!\n");
        printf("Loss Amount: %.2f\n", amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
        
    } else {
        printf("\nNo Profit, No Loss. You broke even.\n");
    }

    return 0;
}
