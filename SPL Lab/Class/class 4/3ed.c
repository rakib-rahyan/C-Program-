//make a calculator and user input n and the program run N times
//input N times of integer number last print the sum or input numbers
//before print the user input numbers.
#include<stdio.h>
int main()
{
    int n;
    printf("Memory declaration\n\"N is Memory for you want to how many store numbers\"\nPlease enter N");
    scanf("%d",&n); //scan n for memory
    int arr[n]; // arr[n] is user enter N and array N number of storage memory.
    int i,sum=0; // declaration i and sum storage;
    // for loop for N times loop run and scan N times and store in arr[i]
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]); // scan the number and store in arr[i]
        sum=sum+arr[i]; //count the user input for sum and store in sum, every loop run and store previous sum and add new input
    }
    printf("Array: "); // just print array:
    for(i=0; i<n; i++)// the loop run N times beacause the programmer show the user input printf that for use loop
    {
        printf("%d ",arr[i]); //the user input print the user input
    }
    printf("\nYour input value of total Sum: %d",sum); // and last the programmer show the out put of sum
    return 0;
}
