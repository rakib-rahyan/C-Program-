//nested loop in prime number
#include<stdio.h>
int main()
{
    int n, flag=1;                                          // input store in variable
    printf("Enter Number you want to this is prime? : ");   // for show you can a input
    scanf("%d",&n);                                         // input store in variable
    int i;      // this line for loop initialised
    for(i=2; i<n; i++) // write for loop
    {
        if(n%i==0) // we know the prime number n if I modulus by 2 to n-1 and find modulus, then I can told this id not prime number.
        {
            flag=0; // if n%i id true then change the flag variable 1 to 0
            break;  // used break because if i can find modulus is 0 then we find this number is not prime number so we no need again run this programme so end the programme
        }
    }
    if(n==1 || n==0)// again use if the user input 0 or 1 the 0 or 1 is not prime number because smell prime number is 2;
    {
        printf("%d is not prime\n",n);
    }
    else if(flag==1)printf("%d is prime\n",n); // in loop see this is prime or not if prime the flag variable can not change if change the programme shift else

    else printf("%d is not prime\n",n);
    return 0;
}
