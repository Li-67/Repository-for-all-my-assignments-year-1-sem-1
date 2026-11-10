#include <stdio.h>

int main() {
    float radius, height, volume, surface_area;
    // Using 3.14159265 as an approximation for pi
    const float PI = 3.14159265;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculations based on the provided formulas
    volume = PI * radius * radius * height;
    surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);

    printf("\n--- Results ---\n");
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface Area of the cylinder: %.2f\n", surface_area);

    return 0;
}
