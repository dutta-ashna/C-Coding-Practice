//Simple Banking System for Deposit and Withdrawal: Implement a simple banking system in C with options to deposit, withdraw, and check balance using functions, displaying a menu for user actions.
#include <stdio.h>
float balance = 0.0;
void deposit(float amount) {
    if (amount > 0) {
        balance += amount;
        printf("Deposited: %.2f\n", amount);
    } else {
        printf("Invalid deposit amount.\n");
    }
}
void withdraw(float amount) {
    if (amount > balance) {
        printf ("Insufficient balance !");
    }
    else {
        balance -= amount;
        printf("Withdraw %.2f, New balance = %.2f\n", amount, balance);
        }
}
void checkBalance() {
    printf("Current Balance = %.2f\n", balance);
}
int main() {
    int choice;
    float amt;
    do {
        printf("\n--- Banking Menu---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
            printf("Enter amount to deposit:");
            scanf("%f", &amt);
            deposit(amt);
            break;
            case 2:
            printf("Enter amount to withdraw:");
            scanf("%f", &amt);
            withdraw(amt);
            break;
            case 3:
            checkBalance();
            break;
            case 4:
            printf("Exixting...\n");
            break;
            default:
            printf("Invalid choice!\n");
        }
    } while (choice !=4);
    return 0;
}