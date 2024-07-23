#include<stdio.h>
int main()
{
    int n,m=0;
    m=n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[n]);
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(a[i]==a[j]){
                for(int k=j; k<n; k++){
                    a[k]=a[k+1];
                    m--;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d",a[n]);
    }
}
