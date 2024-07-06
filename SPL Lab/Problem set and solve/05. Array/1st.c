/*WAP that will take n integer numbers into an array, and then print all the integers into
reverse order (from the last valid index to index 0). */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter your N numbers for take an integer number in arrey: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter integer numbers: ");
        scanf("%d",&arr[i]);
    }
    printf("Your reverse order array: ");
    for(int i=n-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
}

