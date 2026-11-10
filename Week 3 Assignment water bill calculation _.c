#include <stdio.h>

int main() {
    float units;
    double total_bill = 0.0;

    printf("Enter water units consumed: ");
    scanf("%f", &units);

    if (units <= 30) {
        total_bill = units * 20;
    } else if (units <= 60) {
        total_bill = (30 * 20) + ((units - 30) * 25);
    } else {
        total_bill = (30 * 20) + (30 * 25) + ((units - 60) * 30);
    }

    printf("Total water bill: %.2f KES\n", total_bill);

    return 0;
}
