// the triangle is equilateral, isosceles or scalene triangle.
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

    if(sum1==sum2&&sum2==sum3&&sum3==sum1){
        printf("Triangle is equilateral triangle");
    }
    else if(sum1==sum2||sum2==sum3||sum3==sum1){
        printf("Triangle is Isosceles triangle\n");
    }
    else{
        printf("Triangle is Scalene triangle");
    }


    main();
    return 0;
}

