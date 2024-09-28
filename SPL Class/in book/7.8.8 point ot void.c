/*Pointer to void
A pointer to void cannot be dereferenced. Consider this: The compiler knows on a machine with four-byte
integers that an int * points to four bytes of memory. However, a void * contains a memory location
for an unknown type—the precise number of bytes to which the pointer refers is not known by the compiler.
The compiler must know the type to determine the number of bytes that represent the referenced value.
Dereferencing a void * pointer is a syntax error*/
#include <stdio.h>

void printValue(void* ptr, char type) {
    // void pointer কে তার প্রকৃত টাইপ অনুযায়ী কাস্ট করা হচ্ছে
    if (type == 'i') {
        int* intPtr = (int*)ptr; // void* কে int* তে কাস্ট করা হচ্ছে
        printf("Integer value: %d\n", *intPtr); // ডিরেফারেন্স করা হচ্ছে
    } else if (type == 'f') {
        float* floatPtr = (float*)ptr; // void* কে float* তে কাস্ট করা হচ্ছে
        printf("Float value: %.2f\n", *floatPtr); // ডিরেফারেন্স করা হচ্ছে
    } else {
        printf("Unknown type\n");
    }
}

int main() {
    int num = 42;
    float fnum = 3.14;

    // void pointer হিসাবে int এবং float পয়েন্টার
    void* ptrInt = &num;
    void* ptrFloat = &fnum;

    // টাইপ অনুযায়ী ভ্যালু প্রিন্ট করা হচ্ছে
    printValue(ptrInt, 'i');
    printValue(ptrFloat, 'f');

    return 0;
}
