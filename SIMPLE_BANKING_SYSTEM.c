/*
-----------------------------------------------------------------------
                        SIMPLE BANKING SYSTEM (C)
-----------------------------------------------------------------------
Author   : Avaneesh Yajurvedi

Purpose  : This program simulates a basic banking system using a 
           menu-driven interface. It allows the user to:
             • Deposit money
             • Withdraw money
             • Check current balance
             • Exit the application

           Concepts Demonstrated:
             • Switch-case based menu handling
             • Loop-controlled program execution
             • Input validation for financial operations
             • Basic arithmetic and variable updates

           This project strengthens fundamentals in control flow, 
           conditional logic, and user interaction in C programming.
-----------------------------------------------------------------------
*/


#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0, amount;

    while (1) {  // Infinite loop until user exits
        printf("\n====== BANKING SYSTEM ======\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("₹%.2f deposited successfully!\n", amount);
                } else {
                    printf("Invalid amount! Please enter a positive value.\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("₹%.2f withdrawn successfully!\n", amount);
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid amount! Please enter a positive value.\n");
                }
                break;

            case 3:
                printf("Your current balance is: ₹%.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using our banking system. Goodbye!\n");
                return 0; // Exit the program

            default:
                printf("Invalid choice! Please select a valid option (1–4).\n");
        }
    }
    return 0;
}

