//triangle is valid or not if sides are given
#include<stdio.h>
int main()
{
    int first, second, third, sum1, sum2, sum3;
    printf("Input first side: ");
    scanf("%d",&first);
    printf("Input second side: ");
    scanf("%d",&second);
    printf("Input third side: ");
    scanf("%d",&third);

    sum1=first+second;
    sum2=second+third;
    sum3=third+first;

    if(sum1>third&&sum2>first&&sum3>second){
        printf("Triangle is valid\n");
    }
    else{
        printf("Triangle is not valid\n");
    }

    main();
    return 0;
}

