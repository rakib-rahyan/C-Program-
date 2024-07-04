#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many elements you want: ");
    scanf("%d",&n);
    int arr[n],i, sum=0;
    int key, flag=0;in;
    printf("key: ");
    scanf("%d",&key);
    printf("Array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Array: ");
    for(i=0; i<n; i++){
        if(key==arr(i)){
            flag=1;
            in=i;
        }
        printf("%d",arr[i]);
    }
    if(flag==1)printf("\nNot ")
}
