/* print n=3
123
123
123
*/
#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter your N number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("%d",j);
        }
        printf("\n");
    }

}
