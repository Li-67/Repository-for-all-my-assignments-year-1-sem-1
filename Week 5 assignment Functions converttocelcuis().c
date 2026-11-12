#include <stdio.h>

// Function definition
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    float fahrenheit = 98.6;
    float celsius = convertToCelsius(fahrenheit);
    
    printf("Temperature in Fahrenheit: %.1f°F\n", fahrenheit);
    printf("Temperature in Celsius: %.2f°C\n", celsius);
    
    return 0;
}
