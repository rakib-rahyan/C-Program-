#include<stdio.h>
int main()
{
    int i=0, count =0;
    int n=12345;
    while(n!=0){
        printf("%d",n%10);
        count++;
        for(;i<count; i++){
            printf("%d",n/=10);
        }
        printf("\n");
    }
}

