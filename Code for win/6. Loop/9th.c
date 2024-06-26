#include<stdio.h>
int main()
{

    int i, num, mul;
    printf("input num: ");
    scanf("%d",&num);
    i=1;

    for (i; num!=0; i++){
        mul=num*5;
        printf("%d\n",mul);
        scanf("%d",&num);
    }

//    while(num!=0){
//        mul=num*5;
//        printf("%d\n",mul);
//        scanf("%d",&num);
//    }
//    do{
//
//        mul=num*5;
//        printf("%d\n",mul);
//        scanf("%d",&num);
//
//    }while(num!=0);


//    for(i; i<=10; i++){
//        mul=num*i;
//        printf("%d*%d = %d\n",num, i, mul);
//    }
}
