#include<stdio.h>
struct student
{
    char name[100];
    int id;
    float cgpa;
};
int main()
{
    struct student s[2];
    int i=1;
    for(i=0; i<2; i++)
    {
        gets(s[i].name);
        scanf("%d",&s[i].id);
        scanf("%f",&s[i].cgpa);
        fflush(stdin);
        //inpout
    }
    for(i=0; i<2; i++)
    {
        puts(s[i].name);
        printf("%d\n",s[i].id);
        printf("%f\n",s[i].cgpa);//output
    }
}


