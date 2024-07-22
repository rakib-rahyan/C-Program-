/*Wap that will take n integer numbers in an array, n different integer numbers in a second
array and put the sum of the same indexed numbers from the two arrays in a third array.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Input your index number: ");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    printf("\ninput index 1: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\ninput index 2: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nprintf index 1: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nprint index 2: ");
    for(int i=0; i<n; i++)
    {
        printf("%d\n",b[i]);
        c[i]=a[i]+b[i];
    }
    printf("\nprint index 3: ");
    for(int i=0; i<n; i++)
    {
        printf("%d\n",c[i]);
    }
}
