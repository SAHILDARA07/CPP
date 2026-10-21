#include <stdio.h>

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number from 0 to 12: ");
    scanf("%d", &n);

    if (n < 0 || n > 12)
        printf("Enter a number from 0 to 12.\n");
    else
        printf("Factorial = %d\n", factorial(n));

    return 0;
}
