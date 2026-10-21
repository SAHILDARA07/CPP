#include <stdio.h>

int sumToN(int n) {
    if (n <= 0)
        return 0;
    return n + sumToN(n - 1);
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sumToN(n));
    return 0;
}
