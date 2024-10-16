/*
#include<stdio.h>
int main()
{
    char len[]="My name is andy";
    int lenth=0;
    lenth=sizeof(len)/sizeof(len[0]); //count with '\0' charecter
    printf("%d",lenth);
}

#include<stdio.h>
int main()
{
    char len[]="My name is andy";
    int i=0;
    while(len[i]!='\0'){
        i++;
    }
    printf("%d",i);
}
*/
#include<stdio.h>
int main()
{
    char len[50];
    gets(len); //input with out enter
    int i=0;
    while(len[i]!='\0'){
        i++;
    }
    printf("%d",i);
}

/*
#include<stdio.h>
int main()
{
    char len[50];
    fgets(len,sizeof(len),stdin); //input With enter
    int i=0;
    while(len[i]!='\0'){
        i++;
    }
    printf("%d",i);
}
*/
