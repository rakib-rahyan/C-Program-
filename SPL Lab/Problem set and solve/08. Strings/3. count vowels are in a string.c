#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter your string: ");
    fgets(string, sizeof(string), stdin);
    int i=0, j=0;
    while(string[i]!='\0'){
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
        {
            j++;
        }
        i++;
    }
    printf("Number of vowel: %d",j);
    return 0;
}
