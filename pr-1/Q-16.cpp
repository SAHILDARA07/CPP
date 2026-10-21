#include <stdio.h>
int main() {
    int n, sum;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number.\n");
        return 0;
    }

    while (n > 9) {
        sum = 0;
        while (n > 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        n = sum;
    }

    if (n == 1)
        printf("Magic number\n");
    else
        printf("Not a magic number\n");

    return 0;
}
