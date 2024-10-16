#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    int word =wordcount(str);
    printf("Number of word: %d", word);
    return 0;
}

int wordcount(char *str)
{
    int inWord=0;
    int wordcount=0;
    while(*str!='\0')
    {
        if(isspace(*str))
        {
            inWord=0;
        }
        else if(inWord==0)
        {
            inWord=1;
            wordcount++;
        }
    str++;
    }

    return wordcount;
}
