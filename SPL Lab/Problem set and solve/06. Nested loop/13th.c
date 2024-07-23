/*
n=4
1,,,,,1
12,,,21
123,321
1234321
n=3
1,,,1
12,21
12321
*/

#include<stdio.h>
int main()
{
    int n,l=1, p;
    printf("Enter your N number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i!=n){
            for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        for(int k=l; k<=(n-3)+n; k++){
                printf("-");
        }
        for(int j=i; j>=1; j--){
            printf("%d",j);
        }
        }
        else {
            for(int i=1; i<=n; i++){
                printf("%d",i);
                }
            for(int j=n-1; j>=1; j--){
                printf("%d",j);
            }

        }
        l+=2;
        printf("\n");
    }
}

