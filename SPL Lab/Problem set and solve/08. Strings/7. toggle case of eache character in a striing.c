#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter strign: ");
    fgets(str, sizeof(str),stdin);
    //str[strcspn(str, "\n")] = '\0';
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>=65&&str[i]<=90){
            printf("%c",str[i]+32);
        }
        else if(str[i]>=97&&str[i]<=122){
            printf("%c",str[i]-32);
        }
        else{
            printf("%c",str[i]);
        }
        i++;
    }
}
