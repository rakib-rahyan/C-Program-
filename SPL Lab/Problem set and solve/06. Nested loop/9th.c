/* n=4
10101
01010
10101
01010
*/
#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    printf("Enter your N number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(k%2!=0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            k++;
        }
        printf("\n");
    }
}
