#include <stdio.h>

int main() {
    register int i;  //register Variables are stored in the CPU's registers, which are usually faster than memory.
    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    return 0;
}

