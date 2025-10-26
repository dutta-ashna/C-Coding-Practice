#include <stdio.h>

// Global variable declaration
int count = 0;

// Function prototypes
void increment();
void display();

int main() {
    printf("Initial value of count = %d\n", count);
    
    increment();  // Function call to increment
    display();    // Function call to display
    
    increment();
    display();
    
    return 0;
}

// Function to increment global variable
void increment() {
    count++;
    printf("Count incremented.\n");
}

// Function to display global variable
void display() {
    printf("Current value of count = %d\n", count);
}

