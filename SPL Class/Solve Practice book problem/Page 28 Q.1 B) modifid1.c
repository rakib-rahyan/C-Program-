
#include <stdio.h>

int main()
{
    int b;
    printf("Enter your integer input: ");
    scanf("%d", &b);
    puts("Your program output");
    int case_valu1=0,case_valu2=0;
//    if(b>=10)
//    {
//        case_valu1=1;
//    }
    switch(b>=10)
    {
    case 1:
        printf("SPL\n");
        b--;
    }
//    if(b<10){
//        case_valu2=1;
//    }
//    else if(b>=3||b<10){
//        case_valu2=2;
//    }
//    else if(b>=3&&b<10){
//        case_valu2=3;
//    }
//    else{
//        //case_valu2=4;
//    }
    switch(b<10){
        case 1: printf("Spring\n");
        b--;
        break;
        case 0:switch(b>=3||b<10)
                {
                case 1: printf("2023\n");
                        break;
                case 0: switch(b>=3&&b<10)
                {
                    case 1: printf("Happy Coding!");
                            break;
                }
                }
        default: printf("Huh!");
    }


    return 0;
}
