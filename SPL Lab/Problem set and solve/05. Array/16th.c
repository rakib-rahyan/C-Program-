/*WAP that will take n positive integers into an array A. Now find all the integers that have
an odd index and replace them by 0 in array A. Finally show all elements of array A.
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        /*if(a[i]<0){
            printf("\nYou have not input any negative number.\nNow, you are input a negative number so this program new run again.");
            main();
        }
        else{*/
            if(i%2!=0){
            a[i]=0;
            }
        //}
    }
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}
