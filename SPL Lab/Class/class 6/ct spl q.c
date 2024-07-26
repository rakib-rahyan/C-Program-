/*
... 1
..3 23
.63 336
963 4369
*/
#include<stdio.h>
int main()
{
    int n=5,l=1;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++)printf(".");
        for(int j=l; j>=i; j++) printf("%d"j);
        printf("\n");
    }

}
