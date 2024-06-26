//124 this number print 421
#include<stdio.h>
int main()
{
    int n,id, d=0;
    printf("Enter this number you want to reverse print: "); // this printf for what you want to user.
    scanf("%d",&n);     // for input and store in variable
    while(n>0)      //use a while loop.
    {
        id=n%10;       // calculate input number and and storage reminder.
        printf("%d",id); // in reminder 1st store in id or reminder is last digit and again runt the program.
        n=n/10;     // input the n number this n number divided by 10 and sore in integer value
        d++;       // increment the d and count how many times run the program
    }
    printf("\n%d",d); // print the how many time run this program
    return 0;
}
