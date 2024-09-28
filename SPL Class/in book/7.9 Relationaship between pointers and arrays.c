#include <stdio.h>

int main() {
    //declear a array
    int b[] = {10, 20, 30, 40, 50};

    int *bPtr = b;

    printf("Value at b[0]: %d\n", *bPtr); // Output: 10

    printf("Value at b[3]: %d\n", *(bPtr + 3)); // Output: 40

    printf("Value at b[3] using array name: %d\n", *(b + 3)); // Output: 40

    printf("Address of b[3]: %p\n", (void*)(bPtr + 3)); // Output: Address of b[3]
    printf("Address of b[3] using &b[3]: %p\n", (void*)&b[3]); // Output: Address of b[3]

    return 0;
}
