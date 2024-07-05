#include<stdio.h>
#define SIZE 5
int main(void)
{
    int n[SIZE]={19,3,15,7,11};
    printf("%s%15s%19s\n","Element","Value","Bar Chart");
    for(int i=0;i<SIZE; i++){
        printf("%7d%15d%10s",i,n[i],"");
        for(int j=0; j<n[i]; j++){
            printf("%c",'*');
        }
        printf("\n");
    }
}
