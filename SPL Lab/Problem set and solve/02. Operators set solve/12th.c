#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float discriminant,root1,root2,realPart,imaginaryPart;
    scanf("%f %f %f",&a,&b,&c);

    discriminant=b*b-4*a*c;

    if(discriminant>0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("X1: %f\n",root1);
        printf("X2: %f\n",root2);
    }
    else if(discriminant==0){
        root1=root2= -b / (2*a);
        printf("X: %f",root1);
    }
    else{
        realPart=-b/2*a;
        imaginaryPart=sqrt(discriminant)/2*a;
        printf("Root is imaginary: X1 = %0.2f+%0.2fi, X2 = %0.2f - %0.2fi\n",realPart, imaginaryPart);
    }

}
