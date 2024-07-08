#include<stdio.h>
int main()
{
    int num, sum=10, i=4, j=9;
    printf("Enter your number: ");
    scanf("%d",&num);
    switch(num){
    case 1: sum*=3;
    case 2:
    case 3: sum+=--j*2;
            i--; break;
    case 4: sum=++i*j--;
            break;
    case 5: break;
        i+=10;
    default: sum*=i++/j--;
            i=i%j; break;
    }
    printf("num: %d\nsum: %d\ni: %d\nj: %d\n",num, sum, i, j);
}
