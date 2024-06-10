#include<stdio.h>
int main()
{
    char input;
    scanf("%f",&input);

    if(input<='a'&&input>='z'){
        printf("Alphabet");
    }
    else if(input>='A'&&input<='Z'){
        printf("Alphabet");
    }

    main();
    return 0;
}
