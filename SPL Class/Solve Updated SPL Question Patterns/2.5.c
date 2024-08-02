#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='a')
    {
        printf("Appel");
    }
    else if(a=='d')
    {
        printf("Banana");
    }
    else if(a=='c')
    {
        printf("chrry");
        switch(a)
        {
        case 'c':
            printf(" -Sweet fruit");
        }
    }
    else printf("None");
}
