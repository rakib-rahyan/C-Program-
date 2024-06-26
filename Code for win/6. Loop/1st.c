// print all natural numbers form m to n
#include<stdio.h>
int main()
{   int s, e,i=0;
    printf("Input start integer number: ");
    scanf("%d",&s);
    printf("Input end integer number: ");
    scanf("%d",&e);
//    while(s<=e){
//        printf("%d\n",s);
//        s++;
//    }
//    do{
//        printf("%d\n",s);
//        ++s;
//    }while(s<=e);

    for(i; s<=e; s++){
        printf("%d\n",s);
    }

}
