#include <stdio.h>
int main() {
    int units;
    float bill = 0;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units.\n");
    } else {
        if (units <= 100)
            bill = units * 1.5;
        else if (units <= 200)
            bill = 100 * 1.5 + (units - 100) * 2.5;
        else
            bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;

        printf("Electricity bill = Rs. %.2f\n", bill);
    }

    return 0;
}
