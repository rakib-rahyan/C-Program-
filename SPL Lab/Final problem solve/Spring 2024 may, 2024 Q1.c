#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    printf("Enter the Dragon String: ");
    gets(str);
    //printf("%s\n",str);
    int n= countWords(str);
    printf("%d",n);
}
int countWords(char *str)
{
    int inword=0;
    int count=0;
    while(*str!='\0'){
        if(isspace(*str)){
            inword= 0;
        }
        else if(inword==0){
            count++;
            inword=1;

        }
        str++;
    }
    return count;
}
