#include<stdio.h>
struct student
{
    char name[100];
    int id;
    float cgpa;
};
int main()
{
    struct student s1, s2;
    gets(s1.name);
    scanf("%d",&s1.id);
    scanf("%f",&s1.cgpa);
        //for nest stap
    //getchar(); and fflush(stdin); are same example in 1st
    fflush(stdin);
   //struct student s2; //this example in 1st but this program transfrom this line in line 10
    gets(s2.name);
    scanf("%d",&s2.id);
    scanf("%f",&s2.cgpa);

    puts(s1.name);
    printf("%d\n",s1.id);
    printf("%f\n",s1.cgpa);

    puts(s2.name);
    printf("%d\n",s2.id);
    printf("%f\n",s2.cgpa);
    return 0;
}

