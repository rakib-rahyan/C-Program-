// this program for input some elements and mind which elements is maximum using array function
#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many elements you want: ");
    scanf("%d",&n);
    int arr[n],i, max,index; //declare array memory how many memory make.
    printf("Array elements: ");
    for(i=0; i<n; i++)// loop for input values
    {
        scanf("%d",&arr[i]);// scan values and store in array function
    }
    max=arr[0]; //for store maximum number
    index=0;    //store maximum number is which index
    for(i=0; i<n; i++) // run loop for find maximum number
    {
        if(arr[i]>max) //find maximum number for this condition. if max number is arr[i] then enter the condition
        {
            max=arr[i];// if max then store the array number in max variable
            index=i; //and i is change if the condition enter and maximum
        }
    }
    printf("max= %d in index= %d", max, index); //last print maximum number and which index in maximum numbers.
    return 0;
}
