
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter 2 integer number:");
    scanf("%d %d",&num1, &num2);

    if(num1>num2){
        printf("%d is greter then %d\n",num1, num2);
    }
    else if(num2>num1){
        printf("%d is less then %d\n",num1, num2);
    }
    else{
        printf("%d id equal to %d\n",num1,num2);
    }

    main();
    return 0;
}
