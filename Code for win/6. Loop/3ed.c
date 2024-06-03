// print A to Z
// next print a to x
#include<stdio.h>
int main()
{
    char ch;
    for(ch='A'; ch<='Z'; ch++){
        printf("Upper case alphabet: %c\n",ch);
    }
    for(ch='a'; ch<='z'; ch++){
        printf("lower case alphabet: %c\n",ch);
    }
    return 0;
}
