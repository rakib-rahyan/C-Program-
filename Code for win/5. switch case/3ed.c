#include<stdio.h>
int main()
{
    char ch;
    printf("Input alphabet: ");
    scanf(" %c",&ch);

    switch(ch){
        case 'a': printf("%c is vowel\n",ch);
        break;
        case 'e': printf("%c is vowel\n",ch);
        break;
        case 'i': printf("%c is vowel\n",ch);
        break;
        case 'o': printf("%c is vowel\n",ch);
        break;
        case 'u': printf("%c is vowel\n",ch);
        break;
        case 'A': printf("%c is vowel\n",ch);
        break;
        case 'E': printf("%c is vowel\n",ch);
        break;
        case 'I': printf("%c is vowel\n",ch);
        break;
        case 'O': printf("%c is vowel\n",ch);
        break;
        case 'U': printf("%c is vowel\n",ch);
        break;
            default: printf("%c is consonant\n",ch);
    }

    main();
    return 0;
}
