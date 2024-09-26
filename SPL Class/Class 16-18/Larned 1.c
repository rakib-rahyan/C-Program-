#include<stdio.h>
int main()
{
    int n=5;
    int *nPtr=&n;
    printf("storage value of nptr: %d",*nPtr);
    printf("\nstorage value of nptr: %p",nPtr);
    printf("\nstorage value of nptr: %p",&n);
}
