//nested loop in prime number
#include<stdio.h>
int main()
{
    int n, flag=1;
    scanf("%d",&n);
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(n==1 || n==0){
        printf("%d is not prime\n",n);
    }
    else if(flag==1)printf("%d is prime\n",n);

    else printf("%d is not prime\n",n);
    return 0;
}
