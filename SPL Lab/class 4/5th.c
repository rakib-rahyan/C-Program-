//make a calculator and user input n and the program run N times
//print separate the user input is even and odd
//and last print in all input
//and print sum of even and odd separately or in array storage number print sum of even and odd separately
#include<stdio.h>
int main()
{
    int n,q;
    printf("Memory declaration\n\"N is Memory for you want to how many store numbers\"\nPlease enter N: ");
    scanf("%d",&n);
    int arr[n]; // arr[n] is user enter N and array N number of storage memory.
    int i; // i is for loop start
    int sum1=0, sum2=0, sum3=0, sum4=0; //sum1 for user input ever number and sum2 is for user input odd number, sum 3 id
    // for loop for N times loop run and scan N times and store in arr[i]
    for(i=0; i<n; i++)
    {
        scanf("%d",&q); // scan the number and store in q; q is separate for the programmer check user input is even or odd
        arr[i]=q; // in arr[i] enter user input and store in memory and i is change so the memory location is change
        if(i%2==0)// the condition storage input is location even or odd
        {
            sum3=sum3+arr[i]; // the input value is store in even the the input sum in storage input even
        }
        else
        {
            sum4=sum4+arr[i];// the input value is store in odd the the input sum in storage input odd
        }
        if(q%2==0)// the condition for user input is ever or odd
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i]; // if odd the program add in sum2
        }
    }
    printf("Array: "); // declaration the user input is print.
    for(i=0; i<n; i++) //the loop run N times beacause the programmer show the user input printf that for use loop
    {
        printf("%d ",arr[i]); //the user input print the inputs
    }
    printf("\nSum even: %d",sum1); // sum of even inputs
    printf("\n Sum odd: %d",sum2); // sum of odd inputs
    printf("\nSum of array even: %d",sum3); //sum of array storage even
    printf("\nSum of array odd: %d",sum4); //sum of array storage odd

    return 0;
}


