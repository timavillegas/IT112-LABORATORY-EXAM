#include <stdio.h>

int main() {
    char category;
    int age;
    float registrationFee, inspectionFee = 0, totalAmount;

    printf("Enter vehicle category (M-Cycle, C-Car, T-Truck): ");
    scanf(" %c", &category);

    printf("Enter vehicle age in years: ");
    scanf("%d", &age);

    if (category == 'M' || category == 'm') {
        registrationFee = 1000;
    } else if (category == 'C' || category == 'c') {
        registrationFee = 2000;
    } else if (category == 'T' || category == 't') {
        registrationFee = 3000;
    } else {
        printf("Invalid vehicle category!\n");
        return 0;
    }

    if (age >= 10) {
        inspectionFee = 500;
    }

    totalAmount = registrationFee + inspectionFee;

    printf("\nRegistration Fee: P%.2f\n", registrationFee);
    printf("Inspection Fee: P%.2f\n", inspectionFee);
    printf("Total Amount Due: P%.2f\n", totalAmount);

    return 0;
}