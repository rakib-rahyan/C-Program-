//enter a line and this line print in this program
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter your line for printing: ");
    gets(str);
//  printf("%s",str);
    puts("The line is: ");
    puts(str);

    return 0;
}
