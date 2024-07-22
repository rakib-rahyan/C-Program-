/*WAP that will take n integers into an array, and then search a number into that array. If
found then print its index. If not found then print “NOT FOUND”.
*/
#include<stdio.h>
int main()
{
    int n=0, key=0, counter=0;
    printf("Enter n integer number for how may array element wanted: ");
    scanf("%d",&n);
    int arr[n], in[n];
    printf("Enter your element: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter you maching key: ");
    scanf("%d",&key);
    for(int i=0; i<n; i++)
    {
        if(key==arr[i])
        {
            in[counter]=i;
            counter++;
        }
    }
    if(counter>0)
    {
        printf("Found at index position: ");
        for(int i=0; i<counter; i++)
        {
            printf("%d ",in[i]);
        }
    }
    else printf("Not found");
}
