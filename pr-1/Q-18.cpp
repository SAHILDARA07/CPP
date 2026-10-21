#include <stdio.h>
int main() {
    int a[100], n, i;
    printf("Enter number of elements (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) return 0;

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
