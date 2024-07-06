/*WAP that will take n integer numbers into an array, and then find the maximum
minimum among them with its index position.*/
#include<stdio.h>
int main()
{
    int n, max,min,in,in2;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
            in=i;
        }
    }
    min=max;
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
            in2=i;
        }
    }
    printf("Max: %d, Index: %d\n",max, in);
    printf("Min: %d, Index: %d",min, in2);
}
