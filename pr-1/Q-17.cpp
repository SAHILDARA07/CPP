#include <stdio.h>
int main() {
    int n, original, digit, sum = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Please enter a 3-digit number.\n");
        return 0;
    }

    original = n;
    while (n > 0) {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
