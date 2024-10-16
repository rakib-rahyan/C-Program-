#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter your string: ");
    fgets(string, sizeof(string), stdin);
    int i=0, j=0;
    while(string[i]!='\0'){
        if(string[i]==' ')
        {
            j++;
        }
        i++;
    }
    printf("Number of speech: %d",j);
    return 0;
}
