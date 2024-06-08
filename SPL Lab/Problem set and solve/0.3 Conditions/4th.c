#include<stdio.h>
int main()
{
    int ang1, ang2, ang3;
    printf("Enter 3 angle: 0<angle<180= ");
    scanf("%d %d %d",&ang1, &ang2, &ang3);

    if(ang1>0 && ang2>0 && ang3>0){
        if(ang1+ang2+ang3<=180){
           printf("Yes");
        }
        else{
            printf("No");
        }
    }
    else{
        printf("Wrong Input");
    }
    return 0;
}
