#include <stdio.h>

int main() {
    char str[100];  // Buffer to store the input string, size 100

    printf("Enter a string: ");
    // Use scanf() to read a single word (without spaces)
    scanf("%s", str);

    printf("You entered: %s", str);

    return 0;
}
