#include<stdio.h>
int main()
{
    int n,q;
    scanf("%d",&n);
    int arr[n],i,sum1=0, sum2=0, sum3=0, sum4=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&q); //arr[0]=i
        arr[i]=q;
        if(i%2==0){
            sum3=sum3+arr[i];
        }
        else{sum4=sum4+arr[i];}
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
    printf("\nSum even: %d",sum1);
    printf("\n Sum odd: %d",sum2);
    printf("\nSum of array even: %d",sum3);
    printf("\nSum of array odd: %d",sum4);

    return 0;
}


