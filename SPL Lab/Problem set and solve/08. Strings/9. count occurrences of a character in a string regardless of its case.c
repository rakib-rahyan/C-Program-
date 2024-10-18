#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter strign: ");
    fgets(str, sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    char mach=0,mach2=0;
    printf("Enter which character: ");
    scanf("%c",&mach);
    if(mach>=65&&mach<=90){
        mach2=mach+32;
    }
    else if(mach>=97&&mach<=122){
        mach2=mach-32;
    }
    int i=0, count=0;
    while(str[i]!='\0'){
        if(str[i]==mach||str[i]==mach2){
            count++;
        }
        i++;
    }
    printf("%d",count);
}


