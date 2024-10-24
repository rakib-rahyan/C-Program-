#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    if(luckyString(str)){
        printf("Yes\n");
    }
    else
        printf("NO");

}
int luckyString(str)
{
    int count = countWords(str);
    int num = nNoWordLength(*str, count);
}
int countWords(char str[])
{
    int count=0;
    int inWord=0;
    while(*str!='\0'){
       if(isspace(*str)){
        inWord=0;
    }
    else if(inWord==0){
        inWord=1;
        count++;
    }
    str++;
    }
    return count;
}
int nNoWordLength(char *str, int count)
{
    int inword=0
    while(*str!='\0'){
        if(isspace(*str)){
            inword=0;
        }
        else if(inword==0){
            inword=1;
            count++;
        }
        if
    }
}
