#include <stdio.h>
int main() {
    int a[100], n, i, sum = 0;
    float average;
    printf("Enter number of elements (1-100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    average = (float)sum / n;
    printf("Average = %.2f\n", average);
    return 0;
}

25. Mathem
