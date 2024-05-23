//a character is alphabet not.
#include<stdio.h>
int main()
{
    char ch;
    printf("Input character: ");
    scanf(" %c",&ch);

    if(ch>'a' && ch<'z' || ch>'A' && ch<'z'){
        printf("%c is alphabet\n",ch);
    }
    else{
        printf("not alphabet\n");
    }
    main();
    return 0;
}
