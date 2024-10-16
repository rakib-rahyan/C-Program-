#include<stdio.h>
int main()
{
    char pss1[]="Rakib Rahyan";
    printf("%s\n",pss1);
    char pss2[100];
    fgets(pss2,sizeof(pss2),stdin);
    printf("%s",pss2);
    char pass3[100];
    gets(pass3);

    printf("%s",pass3);
}
