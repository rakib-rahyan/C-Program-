#include<stdio.h>
int main()
{
    int n;
    printf("Enter N integer number for show pattern: ");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        for(int j=0; j<i+1; j++)printf("%c",'A'+j);
        printf("\n");
        }
}


