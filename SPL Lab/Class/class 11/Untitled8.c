#include<stdio.h>
void swap (int *a, int *b)
{
 int temp;
 temp= *a;
 *a=*b;
 *b=temp;
 printf("In swap function: \n");
 printf("a= %d b=%d\n",*a,*b);
}
int main()
{
    int a=5, b=10;
    swap(&a,&b);
    printf("In main function:\n");
    printf("a= %d b=%d\n",a,b);
}



