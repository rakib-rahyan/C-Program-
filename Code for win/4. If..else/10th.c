//a character is Uppercase or Lowercase.
#include<stdio.h>
int main()
{
    char ch;
    printf("Input character: ");
    scanf(" %c",&ch);

    if(ch>'A' && ch<'Z'){
        printf("%c is Upper case alphabet\n",ch);
    }
    else if(ch>'a' && ch<'z'){
        printf("%c is Lower case alphabet\n",ch);
    }
    else{
        printf("%c is not alphaber\n",ch);
    }

    main();
    return 0;
}
