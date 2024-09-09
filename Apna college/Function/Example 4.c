/*
practice qs 28
write a function that print Assalamu-Alaikum if user is Bangladesh
/Bonjour if the user is french/ Namaste if user is Indian.
*/
#include<stdio.h>
void printBD();
void printFR();
void printIN();
int main()
{
    char ch;
    printf("Enter (case sensitive) \nif Bangladesh = B \nif French = F \nif Indian = I\nEnter: ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'B': printBD();
        break;
    case 'F': printFR();
        break;
    case 'I': printIN();
        break;
    default: printf("Wrong input");
    }
}
void printBD()
{
    printf("Assalamu-Alaikum\n");
    printFR();  //A function gets called directly or indirectly form main
}
void printFR()
{
    printf("Bonjour\n");
    printIN(); //A function gets called directly or indirectly form main
}
void printIN()
{
    printf("Namaste \n");
    //printBD(); if you can writ all as a loop then the function make a infinity loop

}
