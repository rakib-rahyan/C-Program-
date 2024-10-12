#include <stdio.h>

// Function to print the array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to modify the array
void modifyArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2; // Multiply each element by 2
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    printf("Before modification: ");
    printArray(myArray, size);

    modifyArray(myArray, size); // Passing the array to be modified

    printf("After modification: ");
    printArray(myArray, size);
    for(int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}

