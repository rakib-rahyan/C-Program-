// print all natural numbers form m to n
#include<stdio.h>
int main()
{   int s, e;
    printf("Input start integer number: ");
    scanf("%d",&s);
    printf("Input end integer number: ");
    scanf("%d",&e);

    for( s; s<=e; s++){
        printf("%d\n",s);
    }

}
