#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter your string: ");
    fgets(str, sizeof(str),stdin);
    int n=0;
    while(str[n]!='\0')
    {
        n++;
    }
    int i=0;
    printf("Revers string: ");
    while(n-i!=0){
        printf("%c",str[n-i-1]);
        i++;
    }

}
