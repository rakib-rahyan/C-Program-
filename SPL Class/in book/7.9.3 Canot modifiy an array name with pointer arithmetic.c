#include <stdio.h>

int main() {
    // Initialize an array of integers
    int arr[] = {10, 20, 30, 40, 50};

    // Create a pointer that points to the first element of the array
    int *b = arr;

    // Print the original value of b
    printf("Value at b: %d\n", *b); // Output: 10

    // Attempt to modify the pointer b
    // This line is invalid and will cause a compilation error
    // b += 3; // Uncommenting this line will cause an error

    // Instead, we can use another pointer for demonstration
    // Move newPtr to the fourth element

    // Print the value at the new pointer position
    printf("Value at newPtr *b + 3: %d\n", *b + 3);
    printf("Value at newPtr *b += 3: %d\n", *b += 3);
    printf("Value at newPtr *(b + 3): %d\n", *(b += 3));//Move newPtr to the fourth element //Output: 40

    return 0;
}

