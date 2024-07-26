#include<stdio.h>
int main()
{

    char str[100];
    gets(str);
    for(int i; i<100; i++){
        if(str[i]=='\0'){printf("\0 id %d",i); break;}
    }
    //printf("%s",str);
    puts(str);

    return 0;
}





