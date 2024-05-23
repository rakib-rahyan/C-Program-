
//a character is alphabet, vowel, digit or spacial.
#include<stdio.h>
int main()
{
    char ch;
    printf("Input character: ");
    scanf(" %c",&ch);

    if(ch>'a' && ch<'z' || ch>'A' && ch<'z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u'){
            printf("%c is vowel",ch);
        }
        else{
            printf("%c is alphabet",ch);
        }
    }
    else if(ch>='0' && ch<='9'){
        printf("%c is digit",ch);
    }
    else{
        printf("%c id spacial character",ch);
    }

    main();
    return 0;
}
