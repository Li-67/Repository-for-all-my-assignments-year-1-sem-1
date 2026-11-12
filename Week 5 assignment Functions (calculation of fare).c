#include <stdio.h>

// Function definition
float calculateFare(float distance) {
    float ratePerKm = 50.0;
    return distance * ratePerKm;
}

int main() {
    float distance = 10.0;
    float fare = calculateFare(distance);
    
    printf("Distance: %.1f km\n", distance);
    printf("Total Fare: KSh. %.2f\n", fare);
    
    return 0;
}
