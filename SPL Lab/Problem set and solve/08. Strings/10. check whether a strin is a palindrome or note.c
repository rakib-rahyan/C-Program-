#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    int i=0, len=strlen(str), count=1;
    while(str[i]!='\0'){
        if(str[i]!=str[len-i-1]){
            count=0;
            break;
        }
        i++;
    }
    if(count==1){
        printf("Yes");
    }
    else {
        printf("No");
    }
}
