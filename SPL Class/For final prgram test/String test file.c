#include<stdio.h>
#include<string.h>

int main()
{
    int i, flag = 0;
    char fname[20];
    char lname[10];

    printf("Enter your first name: ");
    fgets(fname, 20, stdin);
    fname[strcspn(fname, "\n")] = 0;

    printf("Enter your last name: ");
    fgets(lname, 10, stdin);
    lname[strcspn(lname, "\n")] = 0;


    for(i = 0; fname[i] != '\0' && lname[i] != '\0'; i++)
    {
        if(fname[i] != lname[i])
        {
            if(fname[i] > lname[i])
            {
                printf("1");
            }
            else
            {
                printf("-1");
            }
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {

        printf("0");
    }

    return 0;
}
