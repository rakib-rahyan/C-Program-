//enter student marks and find percentage and grade
#include<stdint.h>
int main()
{
    int ph,ch, bi, ma, ca;
    float per;
    printf("Input marks of five subjects: ");
    scanf("%d%d%d%d%d",&ph,&ch,&bi,&ma,&ca);

    per=(ph+ch+bi+ma+ca)/5;

    if(per>=90){
        printf("Grade A\n");
    }
    else if(per>=80){
        printf("Grade B\n");
    }

    else if(per>=70){
        printf("Grade C\n");
    }

    else if(per>=60){
        printf("Grade D\n");
    }

    else if(per>=40){
        printf("Grade E\n");
    }

    else{
        printf("Grade F\n");
    }


}
