//*
#include<stdio.h>
int main()
{
    char st1st[100];
    char st2nd[100];
    printf("1st st: ");
    gets(st1st);
    printf("2nd st: ");
    gets(st2nd);
    int i=0;
    while(st1st[i]!='\0')
    {
        i++;
    }
   // i=i+1;
    int j=0;
    while(st2nd[j]!='\0')
    {
        st1st[i]=st2nd[j];
        i++;
        j++;
    }
    st1st[i]='\0';
    printf("str: %s",st1st);
}
//*/
/*
#include<stdio.h>

int main()
{
    char st1st[100];
    char st2nd[100];

    printf("1st st: ");
    fgets(st1st, sizeof(st1st), stdin);
    printf("2nd st: ");
    fgets(st2nd, sizeof(st2nd), stdin);

    if(st1st[strlen(st1st) - 1] == '\n') {
        st1st[strlen(st1st) - 1] = '\0';
    }
    if(st2nd[strlen(st2nd) - 1] == '\n') {
        st2nd[strlen(st2nd) - 1] = '\0';
    }

    printf("str: %s\n", st1st);
    printf("str: %s\n", st2nd);

    int i = 0;
    while (st1st[i] != '\0') {
        i++;
    }

    int j = 0;
    while (st2nd[j] != '\0') {
        st1st[i] = st2nd[j];
        i++;
        j++;
    }

    st1st[i] = '\0';

    printf("str: %s", st1st);
}
*/
