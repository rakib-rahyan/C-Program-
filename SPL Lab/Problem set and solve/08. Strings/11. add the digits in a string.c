#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    int i=0,count=0;
    while(str[i]!='\0'){
        if(isdigit(str[i])){
            int n= str[i]-'0';
            count=count+n;
           // printf("%c ",str[i]);
        }
        i++;
    }
    printf("%d",count);
}
