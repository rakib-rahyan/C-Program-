#include <stdio.h>

int main() {
    int num = 10;
    char letter = 'A';
    float decimal = 5.5;

    // Assigning different types of pointers to void *
    void *void_ptr;

    // No cast required to assign an int * to void *
     void_ptr = &num;
    printf("Void pointer points to integer: %d\n", *(int *)void_ptr);

    // No cast required to assign a char * to void *
    void_ptr = &letter;
    printf("Void pointer points to character: %c\n", *(char *)void_ptr);

    // No cast required to assign a float * to void *
    void_ptr = &decimal;
    printf("Void pointer points to float: %.2f\n", *(float *)void_ptr);

    // Assigning back to specific pointer types (no cast needed, but recommended)
    int *int_ptr;
    char *char_ptr;
    float *float_ptr;

    // Assigning void * to int * (no cast required)
    int_ptr = void_ptr; // If void_ptr currently holds the address of a float, this will lead to an issue.
    // Safely cast it to the correct type
    float_ptr = (float *)void_ptr;
    printf("Float value through float pointer: %.2f\n", *float_ptr);

    return 0;
}
