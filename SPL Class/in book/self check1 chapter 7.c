#include <stdio.h>

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Original pointer value: %p\n", (void*)ptr);
    printf("Original pointer value: %d\n", *ptr);

    ptr++;
    printf("Pointer after increment: %p\n", (void*)ptr);
    printf("Original pointer value: %d\n", *ptr);

    ptr -= 2;
    printf("Pointer after decrement: %p\n", (void*)ptr);

    printf("Value at ptr: %d\n", *ptr);

    return 0;
}

