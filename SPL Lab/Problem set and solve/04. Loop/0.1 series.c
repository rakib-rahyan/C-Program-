#include<stdio.h>
int main()
{
    int N, i=1;
    printf("Input end of series number: ");
    scanf("%d",&N);

    for(i; i<N; i++){
        printf("%d,",i);
    }
    printf("%d",i);
    return 0;
}
