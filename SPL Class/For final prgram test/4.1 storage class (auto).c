#include <stdio.h>

void myFunction(int i) {
    auto int x = 0;
    x++;
    printf("%d x = %d\n",i, x);
}

int main() {
    for(int i=0; i<5; i++){
        myFunction(i); // call again but x = 1, because the previous value is deleted
    }
    return 0;
}

