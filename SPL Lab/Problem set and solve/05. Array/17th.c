 /*WAP that will take n integers into an array A. Now sort them in ascending order within
that array. Finally show all elements of array A. */

// Uncompte program
#include<stdio.h>
int main()
{
    printf("Uncomplet program");
    int n, max=0, in=0, p,k=1;
    scanf("%d",&n);
    int a[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int k=1; k<=n; k++){
        for(int i=k; i<=n; i++){
            if(max<a[i]){
                max=a[i];
                in=i;
            }
        }
        a[0]=max;
        for(int j=in; j>0; j--){
            a[j]=a[j-1];
        }
    }
    for(int i=1; i<=n; i++){
        printf("%d ",a[i]);
    }
}
