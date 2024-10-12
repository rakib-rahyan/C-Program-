#include <stdio.h>

int main() {
    char str[100];  // Buffer to store the input string, size 100 (you can adjust this as needed)

    printf("%s\n","print the string line\n");

    printf("Enter a string: ");
    // Use fgets() to read the input including spaces
    fgets(str, sizeof(str), stdin);

    printf("You entered: %s", str);

    return 0;
}

