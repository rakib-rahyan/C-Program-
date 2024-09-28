/*7.9.2 Pointer/Subscript Notation
Pointers can be subscripted like arrays. If bPtr has the value b, the expression
bPtr[1] refers to the array element b[1]. This is referred to as pointer/subscript notation.*/
#include <stdio.h>

int main() {
    // Initialize an array of integers
    int arr[] = {10, 20, 30, 40, 50};

    // Create a pointer that points to the first element of the array
    int *bPtr = arr;

    // Accessing elements using pointer/subscript notation
    printf("Element at bPtr[0]: %d\n", bPtr[0]); // Output: 10
    printf("Element at bPtr[1]: %d\n", bPtr[1]); // Output: 20
    printf("Element at bPtr[2]: %d\n", bPtr[2]); // Output: 30
    printf("Element at bPtr[3]: %d\n", bPtr[3]); // Output: 40
    printf("Element at bPtr[4]: %d\n", bPtr[4]); // Output: 50

    // You can also modify the elements using pointer/subscript notation
    *(bPtr+2)=200;
    //bPtr[2] = 100; // Change the third element to 100
    printf("After modification, element at bPtr[2]: %d\n", bPtr[2]); // Output: 100

    // Print the entire array to see the change
    printf("Updated array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

