// fig05_08_rewritten.c
// Scoping example with local, static, and global variables.

#include <stdio.h>

// Function prototypes
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

// Global variable
int x = 1;

int main(void) {
    // Local variable to main
    int x = 5;

    printf("local x in outer scope of main is %d\n", x);

    {   // Start new scope
        int x = 7; // Local variable to new scope

        printf("local x in inner scope of main is %d\n", x);
    }   // End new scope

    printf("local x in outer scope of main is %d\n", x);

    // Call functions
    useLocal();        // Automatic local x
    useStaticLocal();  // Static local x
    useGlobal();       // Global x

    useLocal();        // Automatic local x, reinitialized
    useStaticLocal();  // Static local x, retains previous value
    useGlobal();       // Global x, retains previous value

    printf("\nlocal x in main is %d\n", x);

    return 0;
}

// Function to demonstrate automatic local variables
void useLocal(void) {
    int x = 25; // Reinitialized each time

    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}

// Function to demonstrate static local variables
void useStaticLocal(void) {
    static int x = 50; // Initialized only once

    printf("\nlocal static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("local static x is %d on exiting useStaticLocal\n", x);
}

// Function to demonstrate global variable usage
void useGlobal(void) {
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n", x);
}

