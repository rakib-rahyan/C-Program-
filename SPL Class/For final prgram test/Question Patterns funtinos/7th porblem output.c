#include<stdio.h>
int a,b,c=5,d=2;
int func1(int a,int b){
 c=a+b;
 return c*2;
}
int func2(int p){
 p=p+a;
 a*=2;
 return p;
}
void func3(int d){
 int c=d+10;
 b=func2(c);
}
void main(){
 a=1;b=3;
 printf("%d %d %d %d\n",a,b,c,d);
 a=func1(a,b);
 printf("%d %d %d %d\n",a,b,c,d);
 d=func2(c);
 printf("%d %d %d %d\n",a,b,c,d);
 func3(b);
 printf("%d %d %d %d\n",a,b,c,d);
}
