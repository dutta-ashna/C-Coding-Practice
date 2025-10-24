#include <stdio.h>

int main() {
    char title[50];
    char author[50];
    int isbn;
    float price;
    char publisher[50];
    int year;

    // Input book details
    printf("Enter Book Title (single word): ");
    scanf("%s", title);

    printf("Enter Author Name (single word): ");
    scanf("%s", author);

    printf("Enter ISBN (integer): ");
    scanf("%d", &isbn);

    printf("Enter Price (float): ");
    scanf("%f", &price);

    printf("Enter Publisher (single word): ");
    scanf("%s", publisher);

    printf("Enter Year of Publication (integer): ");
    scanf("%d", &year);

    // Display book details
    printf("\n--- Book Details ---\n");
    printf("Title      : %s\n", title);
    printf("Author     : %s\n", author);
    printf("ISBN       : %d\n", isbn);
    printf("Price      : %.2f\n", price);
    printf("Publisher  : %s\n", publisher);
    printf("Year       : %d\n", year);

    return 0;
}


