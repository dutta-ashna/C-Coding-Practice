//Calculate Area of a Circle: Write a C program to calculate the area of a circle using a function that takes the radius as an argument and returns the area.
#include <stdio.h>
#define PI 3.14159
float areaOfCircle(float radius) {
    return PI * radius * radius;
} 
int main() {
    float r, area;
    printf("Enter radius:");
    scanf("%f", &r);
    area = areaOfCircle(r);
    printf("Area of Circle: %.2f\n", area);
    return 0;
}
