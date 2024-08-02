#include<stdio.h>
int main()
{
    char n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("Beginner");
    }
    else if(n==2)
    {
        printf("Intermediate");
    }
    else if(n==3)
    {
        printf("Advanced");
        switch(n)
        {
        case 3:
            printf(" -Expert lavel");
        }
    }
    else printf("None");
}

