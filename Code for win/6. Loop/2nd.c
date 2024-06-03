//print natural numbers in reverse form n to m;
#include<stdio.h>
int main()
{
    int s, e;
    printf("if print natural numbers in reverse form n to m\n for example: Natural numbers from 10-1 in reverse\n");
    printf("Input last integer number: ");
    scanf("%d",&e);
    printf("Input frist integer number: ");
    scanf("%d",&s);

    for(e; e>=s; e--){
        printf("%d\n",e);
    }

}
