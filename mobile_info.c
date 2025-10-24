#include <stdio.h>

int main() {
    char brand[50];
    char model[50];
    int serialNumber;
    float price;
    char color[20];
    int batteryCapacity;

    // Input mobile phone details
    printf("Enter Brand Name (single word): ");
    scanf("%s", brand);

    printf("Enter Model Name (single word): ");
    scanf("%s", model);

    printf("Enter Serial Number (integer): ");
    scanf("%d", &serialNumber);

    printf("Enter Price (float): ");
    scanf("%f", &price);

    printf("Enter Color (single word): ");
    scanf("%s", color);

    printf("Enter Battery Capacity (mAh) (integer): ");
    scanf("%d", &batteryCapacity);

    // Display mobile phone details
    printf("\n--- Mobile Phone Details ---\n");
    printf("Brand Name       : %s\n", brand);
    printf("Model Name       : %s\n", model);
    printf("Serial Number    : %d\n", serialNumber);
    printf("Price            : %.2f\n", price);
    printf("Color            : %s\n", color);
    printf("Battery Capacity : %d mAh\n", batteryCapacity);

    return 0;
}
