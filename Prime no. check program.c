#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime
    if (num < 2) {
        printf("%d is not a Prime number.\n", num);
        return 0;
    }

    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Print result
    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    return 0;
}
