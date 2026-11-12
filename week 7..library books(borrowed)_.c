#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char bookTitle[100];
    char choice;

    // Open file in append mode ("a") to preserve existing records
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Enter the title of the borrowed book: ");
        getchar(); // Clear the input buffer
        fgets(bookTitle, sizeof(bookTitle), stdin);

        // Write the title to the file
        fprintf(file, "%s", bookTitle);
        
        // Display confirmation message
        printf("Confirmation: Book title successfully stored in borrowed_books.txt\n");

        printf("Do you want to add another book? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    // Close the file
    fclose(file);
    printf("Program closed. All records saved.\n");

    return 0;
}
