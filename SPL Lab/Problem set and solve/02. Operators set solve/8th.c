#include<stdio.h>
int main()
{
    int a, b;
    printf("If you want see in 2 number which is max\nthan input 2 integer number: ");
    scanf("%d %d", &a,&b);

    if(a==b){
        printf("Number is equal\n");
    }
    else if(a>b){
        printf("Max: %d",a);
    }
    else{
        printf("Max: %d",b);
    }

    return 0;
}

