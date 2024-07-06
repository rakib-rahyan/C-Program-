/* WAP that will take n integer numbers into an array, and then sum up all the integers in
that array.*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter your N numbers for take an integer number in arrey: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter integer numbers: ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of all input integer number: %d",sum);
}
