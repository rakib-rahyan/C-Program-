//a character is alphabet, vowel.
#include<stdio.h>
int main()
{
    char ch;
    printf("Input character: ");
    scanf(" %c",&ch);

    if(ch>'a' && ch<'z' || ch>'A' && ch<'z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u'){
            printf("%c is vowel\n",ch);
        }
        else{
            printf("%c is alphabet\n",ch);
        }
    }
    else{
        printf("invalid input\n");
    }
    main();
    return 0;
}
