#include<stdio.h>
int main()
{
    int i=1, n;
    scanf("%d",&n);

    for(i;i<n;i++){
        if(i%2==0){
            printf("0, ");
        }
        else{
            printf("1, ");
        }
    }
    if(n%2==0){
        printf("0 ");
    }
    else{
        printf("1 ");
    }
}
