#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
