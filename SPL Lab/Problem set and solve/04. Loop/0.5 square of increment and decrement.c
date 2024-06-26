#include<stdio.h>
int main()
{
    int x,y,i=0;
    scanf("%d %d",&x,&y);

    if(x==y){
        printf("Reached!");
    }
    else if(x>y){
        for(i; x>y; x--){
            printf("%d, ",x*x);
        }
        printf("Reached!");
    }
    else{
        for(i;x<y;x++){
            printf("%d, ",x*x);
        }
        printf("Reached!");
    }
}
