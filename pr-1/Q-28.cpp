#include <stdio.h>

int sumToN(int n) {
    int i, sum = 0;
    for (i = 1; i <= n; i++)
        sum = sum + i;
    return sum;
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sumToN(n));
    return 0;
}
