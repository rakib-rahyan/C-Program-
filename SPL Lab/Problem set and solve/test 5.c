#include<stdio.h>
int main()
{
    int n=3,i,j, m;
    m=n;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d",m--);
    }
        printf("\n");
        m=n;
    }
}
