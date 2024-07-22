/*WAP that will take n integers into an array A, and then copy all numbers in reverse order
from array A to another array B. Finally show all elements of both array A and B.*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        b[n-1-i]=a[i];
    }
    printf("\nArray A: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\nArray B: ");
    for(int i=0; i<n; i++){
        printf("%d ",b[i]);
    }
}
