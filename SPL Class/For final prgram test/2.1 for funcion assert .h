#include <stdio.h>
#include <assert.h>  // Include the assert header file

void divide(int a, int b) {
    assert(b != 0);  // Ensure that b is not zero
    printf("Result: %d\n", a / b);  // Print the result of the division
}

int main() {
    divide(10, 2);   // Correct call
    divide(10, 2);   // Here b is zero, assert will fail
    return 0;
}

