#include<stdio.h>
int main()
{
    int n,q;
    scanf("%d",&n);
    int arr[n],i,sum1=0, sum2=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&q); //arr[0]=i
        arr[i]=q;
        if(q%2==0){
            sum1=sum1+arr[i];
        }
        else{sum2=sum2+arr[i];}
    }
    printf("Array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nSum evem: %d",sum1);
    printf("\n Sum odd: %d",sum2);

    return 0;
}

