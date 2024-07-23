#include<stdio.h>
int main()
{
    int n,m, flag=0;
    scanf("%d %d",&n, &m);
    int a[n],b[m];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<m; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]!=b[j]){
                flag=1;
            }
            if(flag=1){
            printf("%d",a[i]);
            flag=0;
        }
        }


    }
}
