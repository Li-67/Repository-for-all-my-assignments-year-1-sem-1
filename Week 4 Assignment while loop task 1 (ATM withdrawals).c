#include <stdio.h>

int main() {
    float balance, withdrawal;

    // Set initial account balance (e.g., 5000 KES)
    printf("Enter initial account balance (KES): ");
    scanf("%f", &balance);

    // Loop as long as balance is greater than 0
    while (balance > 0) {
        printf("Current Balance: %.2f KES\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        balance -= withdrawal; // Subtract withdrawal amount
        printf("Updated Balance: %.2f KES\n\n", balance);
    }

    printf("Account balance is zero or negative. Transaction ended.\n");

    return 0;
}
