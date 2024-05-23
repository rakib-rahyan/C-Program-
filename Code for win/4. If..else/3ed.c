// check a number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Input number: ");
    scanf("%d",&num);

    if(num>0){
        printf("%d is positive\n",num);
    }
    else if(num<0){
        printf("%d is negative\n",num);
    }
    else if(num==0){
        printf("%d is zero\n",num);
    }
    else{
        printf("Invalid inpur");
    }

    main();
    return 0;
}
