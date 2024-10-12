#include <stdio.h>

void myStaticFunction() {
    static int y = 0;
    y++;
    printf("y = %d\n", y);
}

int main() {
   for(int i=0; i<5; i++){
        for(int i=0; i<5; i++){
        myStaticFunction(i); // call again but x = 1, because the previous value is deleted
    }
    }
    return 0;
}

