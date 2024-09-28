/*You can compare pointers using equality and relational operators, but such comparisons
are meaningful only if the pointers point to elements of the same array; otherwise,
such comparisons are logic errors. Pointer comparisons compare the addresses
stored in the pointers. Such a comparison could show, for example, that one pointer
points to a higher-numbered array element than the other. A common use of pointer
comparison is determining whether a pointer is NULL.*/
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[1]; // ptr1 points to the second element (20)
    int *ptr2 = &arr[3]; // ptr2 points to the fourth element (40)
    int *ptr3 = NULL; // null;

    // Comparing pointers
    if (ptr1 == ptr2) {
        printf("ptr1 and ptr2 point to the same element.\n");
    } else {
        printf("ptr1 and ptr2 point to different elements.\n");
    }

    // Checking if ptr1 is less than ptr2
    if (ptr1 < ptr2) {
        printf("ptr1 points to an element before ptr2 in the array.\n");
    } else {
        printf("ptr1 points to an element after or at the same position as ptr2 in the array.\n");
    }

    // Checking if ptr1 is NULL
    if (ptr3 == NULL) {
        printf("ptr1 is NULL.\n");
    } else {
        printf("ptr1 is not NULL and points to %d.\n", *ptr1);
    }

    return 0;
}
