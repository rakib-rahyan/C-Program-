#include<stdio.h>
int printTable(int n);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    printTable(n); //argument/actual parameter
    return 0;
}

int printTable(int n) //parameter/formal parameter
{
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",n,i,i*n);
    }

}
