// find all roots of a quadratic equation using switch case.
#include<stdio.h>
int main()
{
    float a, b, c, del, root1, root2;
    printf("Input a: ");
    scanf("%f",a);
    printf("Input b: ");
    scanf("%f",b);
    printf("Input c: ");
    scanf("%f",c);

    del=b*b+4*a*c;

    switch(del>0){
        case 1:
            root1=-b+sqrt(del)/2*a
            root2=-b-sqrt(del)/2*a
            break;
        case 0: switch(del<0){
                    case 1:
                        root1=root2=-b/2*a;
                        break;
                    case 0:

                    }
        }

    main();
    return 0;
}
