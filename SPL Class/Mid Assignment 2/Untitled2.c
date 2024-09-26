#include <stdio.h>

int main()
{

    int b=(92%21)+5;

    int A[10];
    int a= 492;

    for(int i=0; i<10; i++)
    {
        A[i]=(a%7)+(3*i);
    }

    int sum=0;

    for(int i=0; i<10; i+=2)
    {
        sum+=A[i];
    }

    printf("Value of b:%d\n",b);
    printf("Array A: ");

    for(int i=0; i<10; i++)
    {
        printf("%d ",A[i]);
    }

    printf("\nEven Sum:%d\n",sum);
  //      return 0;

}
