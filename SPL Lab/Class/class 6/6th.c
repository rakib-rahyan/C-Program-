#include<stdio.h>
int main()
{

    char str[100];
    gets(str);
    puts(str);
    int i, c=0;
    for(i=0; i<100; i++){
        if(str[i]=='\0'){printf("found in index= %d\n",i); break;}
        c++;
    }
    printf("Length of the string: %d",c);

    return 0;
}






