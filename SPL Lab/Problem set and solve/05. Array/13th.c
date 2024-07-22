/*WAP that will take n integer numbers as input in an array and then delete a number from
a position specified by the user in the array.*/
#include<stdio.h>
int main()
{
    int n, pos;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&pos);

    for(int i=pos; i<n; i++){
        arr[i]=arr[i+1];
    }
    for(int i=0; i<n-1; i++){
        printf("%d ",arr[i]);
    }
}
