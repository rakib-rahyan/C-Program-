#include<stdio.h>
void ArrayRev(n,a);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("%d Enter: ",i);
        scanf("%d",&a[i]);
    }
    ArrayRev(n,a);
    return 0;
}

ArrayRev(int n, int b[])
{
    printf("Revers number: ");
    for(int i=n-1; i>-1; i--)
    {
        printf("%d ",b[i]);
    }

}

