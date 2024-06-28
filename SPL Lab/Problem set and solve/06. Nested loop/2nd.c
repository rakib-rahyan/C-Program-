/* print n=3
123
234
345
*/
#include<stdio.h>
int main()
{
    int n, i,p, j,m;
    printf("Enter your N number: ");
    scanf("%d",&n);
    m=n;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=m; j++)
        {
            printf("%d",j);

        }
        printf("\n");
        m++;
    }


}
