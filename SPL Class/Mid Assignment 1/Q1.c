
#include<stdio.h>
int main()
{
    int n,l=1, i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for( j=i; j<n-1; j++)printf("-");
        for(int k=0; k<=i;k++)
        {
            printf("%d",l);
            l+=2;
            if(l>n){
                l=1;
            }
        }
        printf("\n");
        l=1;
    }
}
