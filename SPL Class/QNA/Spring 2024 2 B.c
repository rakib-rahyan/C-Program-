#include<stdio.h>
int main()
{
   int p=1;
   int x;
   printf("Enter your gread number: ");
   scanf("%d",&x);
   for(int i=1;i<=p; ){
    printf("%d %d %d\n", i,p,x);
    if(x%29==0){
        printf("not a great number!");
        break;
    }
    else{
        x-=13;
        p+=x%10;
        i+=3;
    }
   }
}
