//Write a C program that collects and displays the following details about a product:
// - Product Name (single word, e.g., "Laptop")
// - Product ID (integer, e.g., 12345)
// - Quantity (integer, e.g., 20)
// - Price (floating-point number, e.g., 999.99)
// - Manufacturer (single word, e.g., "Dell")
// - Category (single word, e.g., "Electronics")
#include <stdio.h>
int main() {
    char productName[50];
    int productID;
    int quantity;
    float price;
    char manufacturer[50];
    char category[50];

    // Collecting product details from the user
    printf("Enter Product Name: ");
    scanf("%s", productName);
    
    printf("Enter Product ID: ");
    scanf("%d", &productID);
    
    printf("Enter Quantity: ");
    scanf("%d", &quantity);
    
    printf("Enter Price: ");
    scanf("%f", &price);
    
    printf("Enter Manufacturer: ");
    scanf("%s", manufacturer);
    
    printf("Enter Category: ");
    scanf("%s", category);

    // Displaying the collected product details
    printf("\nProduct Details:\n");
    printf("Product Name: %s\n", productName);
    printf("Product ID: %d\n", productID);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);
    printf("Manufacturer: %s\n", manufacturer);
    printf("Category: %s\n", category);

    return 0;
}