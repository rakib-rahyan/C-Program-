#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Input 3 integer number: ");
    scanf("%d %d %d",&a,&b,&c);
    switch((a+b)<=80)
    {
        case 1:
            printf("a)(a+b)<=80: 1\n");
            break;

        case 0:
            printf("a)(a+b)<=80: 0\n");
            break;
    }
    switch(!(a+c)){
        case 1:
            printf("b)!(a+c): 1\n");
            break;
        case 0:
            printf("b)!(a+c): 0\n");
    }
    switch(a!=0){
        case 1:
            printf("c)a!=0: 1\n");
            break;
        case 0:
            printf("c)a!=0: 0\n");
    }
    return 0;
}
