
#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many elements you want: ");
    scanf("%d",&n);
    int arr[n],i, max,maxind;
    printf("Array elements: ");

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    maxind=0;
    for(i=0;i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            maxind=i;
        }
    }
    printf("max= %d in index= %d", max, maxind);
    return 0;
}
