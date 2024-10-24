#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter your string: ");
    gets(str);
    printf("%s\n",str);
    int len = stringlength(str);
    //printf("%d",len);

    printf("enter replece characte: ");
    char ch;
    scanf("%c",&ch);
    UpdateCharacter(str, len, ch);
    printf("%s\n",str);
}
int stringlength(char str[])
{
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
void UpdateCharacter(char str[], int n, char c){
    int i=0;

    while(str[i]!='\0'){
        if(str[i]==' '){
            str[i]=c;
        }
    i++;
    }
}
