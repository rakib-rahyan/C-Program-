#include<stdio.h>
int main()
{
 int a[3]={1,3,4};
 printf("%d %d %d\n",&a[0],&a[1],&a[2]);
 printf("%p %p %p",&a[0],&a[1],&a[2]);
}

