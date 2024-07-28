// fig06_02.c
// Initializing the elements of an array with an initializer list.
//modifid in line .
#include<stdio.h>
int main()
{
    int i, arr[5]= {5,7,9,6,8}; // initialize n with initializer list
//    printf("%s%8s\n","Element","Value"); orginal program write this
    printf("Element\tvalue\n"); // I am write this
    //orginal program write this

    /* for (size_t i = 0; i < 5; ++i) {
      printf("%7zu%8d\n", i, n[i]);
    }
    */
    // output contents of array in tabular format
    for(i=0; i<5; ++i)
    {
        printf("%7d%6d\n",i,arr[i]);
    }
}
