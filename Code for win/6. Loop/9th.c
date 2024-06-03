#include<stdio.h>
int main()
{
    int i, num, mul;
    printf("input num: ");
    scanf("%d",&num);
    i=1;

    for(i; i<=10; i++){
        mul=num*i;
        printf("%d*%d = %d\n",num, i, mul);
    }
}
