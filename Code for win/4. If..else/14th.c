//triangle is valid or not if angle are given
#include<stdio.h>
int main()
{
    int first, second, third, sum;
    printf("Input first angle: ");
    scanf("%d",&first);
    printf("Input second angle: ");
    scanf("%d",&second);
    printf("Input third angle: ");
    scanf("%d",&third);

    sum=first+second+third;

    if(first>0 && second>0 && third>0){
        if(sum==180){
            printf("The triangle is valid\n");
        }
        else{
            printf("The triangle is not valid\n");
        }
    }
    else{
        printf("The triangle is not valid\n");
    }

    main();
    return 0;
}
