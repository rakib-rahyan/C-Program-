//this program is for 2 user.
//1st the program user given how many given chance
//the 1st user input key number
//then 2nd user input elements
//and the program match all elements with key
//if key is match then store in index and flag change for 2nd condition match
#include<stdio.h>
int main()
{
    int n;
    printf("Enter How many elements you want: ");// enter for users change one kind of
    scanf("%d",&n);
    int arr[n]; // declare array memory any input n is memory size. if n=3 then memory is 12dit
    int i,sum=0; //initialization loop, and declare sum for input sum store
    int key,flag=0,in;
    printf("Key: "); // for enter user keys
    scanf("%d",&key);
    printf("Array element: ");// 2nd user enter element declare
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]); // scan 2nd user all element
        sum=sum+arr[i];      //user enter element and this element sum by previous sum
    }
    printf("Array: "); //this array for user input show by out put
    for(i=0;  i<n; i++) //loop for print array  n times and meshing key == array numbers
    {
        if(key==arr[i])// this condition for mashing key and array
        {
            flag=1;
            in=i;
        }
        printf("%d",arr[i]); // printing input numbers and change serials for [i]
    }
    // this condition for if meshing flag== 1 is mean key and arr[i] memory is mech in 2nd loop
    if(flag==1)printf("\nFound in index: %d\n",in);// in 2nd loop in store by i value which time the the array match
    else printf("\nNot Found");
    printf("\nsum: %d",sum); //in 1st loop calculation all input sum is print.

    return 0;

}
