//a character is alphabet digit or spacial.
#include<stdio.h>
int main()
{
    char ch;
    printf("Input character: ");
    scanf(" %c",&ch);

    if(ch>'a' && ch<'z' || ch>'A' && ch<'z'){
        printf("%c is alphabet\n",ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("%c is digit\n",ch);
    }
    else{
        printf("%c id spacial character\n",ch);
    }

    main();
    return 0;
}
