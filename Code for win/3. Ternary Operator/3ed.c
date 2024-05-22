//find number is ever or off in ternary operator.
#include<stdio.h>
int main()
{
    int num;
    printf("Input number: ");
    scanf("%d",&num);

    (num%2==0)?printf("%d is even\n",num):printf("%d is odd\n",num);

    main();
    return 0;
}
