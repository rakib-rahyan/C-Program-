#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    fgetc(str, sizeof(str), stdin)
    if(str[strlen(str)-1]!='\n'){
        str[strlen(str)-1]='\0';
    }

    int i=0;

    while(str[i]!='\0'){
        if(str)
    i++;
    }
}
