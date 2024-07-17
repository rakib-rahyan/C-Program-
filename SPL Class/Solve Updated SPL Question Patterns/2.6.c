#include<stdio.h>
int main()
{
    int status;
    printf("Enter 0-2 integer number: ");
    scanf("%d",&status);
    /*
    if (status == 0) {
        printf("Inactive");
    } else if (status == 1) {
        printf("Active");
    } else if (status == 2) {
        printf("Pending");
        if (status == 2) {
            printf(" - Awaiting approval");
        }
    } else {
        printf("Unknown");
    }
    */
    switch(status)
    {
        case 0: printf("Inactive");break;
        case 1: printf("Active"); break;
        case 2: printf("Pending");
                switch(status==2){
                case 1: printf(" -Awaiting approval");}
                break;
        default: printf("Unknown");
    }
}
