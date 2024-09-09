// Practice QS 27
//write 2 functions - one to print "Hello" & second to print "good Bye"
#include<stdio.h>
// Declaration/Prototype
void printHello();
void printBye();

int main()
{
    printHello(); //function call
    printBye(); //function call
    return 0;
}
//function definition
void printHello()
{
    printf("Hello\n");
}
//function difiniton
void printBye()
{
    printf("Good bye");
}
