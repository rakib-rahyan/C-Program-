#include <stdio.h>

int main() {
    int X;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &X);

    // Using printf to display the increment and decrement operations
    printf("X++: %d\n", X++); // Post-increment: use X, then increment
    printf("++X: %d\n", ++X); // Pre-increment: increment, then use X
    printf("X--: %d\n", X--); // Post-decrement: use X, then decrement
    printf("--X: %d\n", --X); // Pre-decrement: decrement, then use X

    return 0;
}
