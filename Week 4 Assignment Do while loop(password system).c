#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    // Use a do-while loop to prompt at least once
    do {
        printf("Enter password: ");
        scanf("%s", password);

        // Check if the password matches "1234"
        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password. Try again.\n");
        }

    } while (strcmp(password, "1234") != 0);

    // Display Access Granted once the correct password is provided
    printf("Access Granted\n");

    return 0;
}
