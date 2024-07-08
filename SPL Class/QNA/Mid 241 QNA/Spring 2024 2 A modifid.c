#include<stdio.h>
int main()
{
    int num, sum=10, i=4, j=9;
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num==1){sum*=3;}
    if(num==2)
    if(num==3){
        sum+=--j*2;
        i--;
    }
    else if(num==4){
       sum=++i*j--;
    }
    else if(num==5){
            i+=10;
    }

    else {
        sum*=i++/j--;
        i=i%j;}
    printf("num: %d\nsum: %d\ni: %d\nj: %d\n",num, sum, i, j);
}
