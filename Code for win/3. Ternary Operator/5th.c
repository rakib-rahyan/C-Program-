#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf(" %c",&ch);

    (ch>'a' && ch<'z') || (ch>'A' && ch<'Z')? printf("It is ALPHABET\n"):printf("It is not ALPHABET\n");

    main();
    return 0;
}
