#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    switch(age<13)
    {
    case 1:
        printf("childe");
        break;
    case 0:
        switch(age<20)
        {
        case 1:
            printf("Teen");
            break;
        case 0:
            switch(age<65)
            {
            case 1:
                printf("Adult");
                switch(age>=18 && age<65)
                {
                case 1:
                    printf(" -Working age");
                }
                break;
            }
        }
    default: printf("Senior");
    }
}

