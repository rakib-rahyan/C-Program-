/*WAP  that will take n floating point numbers into an array, and then find the average of those
numbers*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter your N numbers for take an integer number in array: ");
    scanf("%d",&n);
    float arr[n],sum=0,avg;
    for(int i; i<n; i++){
        printf("Enter your integer numbers: ");
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("your floating average: %0.2f",avg);
}
