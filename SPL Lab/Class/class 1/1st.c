//recap if else problem in spl lab
// input 2 integer number and show which is maximum number.
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter 2 integer number if you can see which number is maximum: ");
    scanf("%d %d", &num1 ,&num2);
    if(num1>num2){
        printf("%d is maximum\n",num1);
    }
    else if(num1<num2){
        printf("%d is maximum\n",num2);
    }
    else {
        printf("number are equal.\n");
    }

    printf("If you wanted exit a this program enter any key.\n");
    getch();
    flo

    return 0;
}
            // same problem solve in Bitwise operator.
/*
#include<stdio.h>
int main()
{   int a,b;
    printf("Enter 2 integer number if you can see which number is maximum: ");
    scanf("%d %d",&a,&b);
    a>b?printf("%d is max\n",a):printf("%d is max\n",b);

    printf("If you wanted exit a this program enter any key.\n");
    getch();
    return 0;
}
*/
