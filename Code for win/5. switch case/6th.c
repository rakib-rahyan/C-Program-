//check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
int main()
{
    int num;
    printf("Input number: ");
    scanf("%d",&num);

    switch(num>0){
        case 1:printf("Positive number\n");
        break;
        case 0: switch(num<0){
            case 1: printf("Negative Number\n");
            break;
            case 0: printf("%d is zero.\n",num);
            break;
            }
        break;
        }

    printf("In you want run agai pleace input.\n");

    main();
    return 0;
}
