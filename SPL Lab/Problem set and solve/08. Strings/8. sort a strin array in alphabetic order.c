#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter strign: ");
    fgets(str, sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    int len= strlen(str);
    for(int i=0; i<len-1; i++){
        for(int j=i+1; j<len;j++){
            if(str[i]>=str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
}

