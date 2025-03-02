#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int i, len, isPalindrome = 1;

    printf("Enter a number or a string: ");
    scanf("%s", input);

    len = strlen(input);
    for (i = 0; i < len / 2; i++) {
        if (input[i] != input[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1)
        printf("%s is a palindrome.\n", input);
    else
        printf("%s is not a palindrome.\n", input);

    return 0;
}
