#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter your string: ");
    fgets(str, sizeof(str),stdin);
    int n=0;
    while(str[n]!='\0')
    {
        if(str[n]>=90&&str[n]<=122){
            printf("%c",str[n]-32);
        }
        else{
            printf("%c",str[n]);
        }
        n++;
    }
}

