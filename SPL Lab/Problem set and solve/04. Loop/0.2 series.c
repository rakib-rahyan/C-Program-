#include<stdio.h>
int main()
{
    int i, n, p=1;
    scanf("%d",&n);

    for(i=1; i<n; i++){
        printf("%d, ",p);
        p+=2;
    }
    printf("%d",p);
}
