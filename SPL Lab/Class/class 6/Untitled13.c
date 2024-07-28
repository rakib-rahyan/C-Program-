// fine nall character
#include<stdio.h>
int main()
{
    char str[10];
    gets(str);
    for(int i; i<10; i++)
    {
        if(str[i]=='\0')
        {
            printf("\0 id %d ",i);
            break;
        }
    }
    printf("%s",str);
    puts(str);

    return 0;
}

