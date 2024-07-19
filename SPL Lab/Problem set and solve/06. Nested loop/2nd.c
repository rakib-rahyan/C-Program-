/* print n=3
123
234
345
*/
#include<stdio.h>
int main()
{
    int n, i,j;
    printf("Enter your N number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n+i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
