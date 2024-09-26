#include<stdio.h>
int main()
{
    int A[4]= {0};
    int i, n;
    n = 492;
    for(int i=0; i<4; i++)
    {
        A[i] = n+i;
        if(A[i]%2!= 0)
        {
            A[i] *= 2;
        }
    }
     for(int i=0; i<4; i++)
    {
        printf("%d\n",A[i]);
    }
}
