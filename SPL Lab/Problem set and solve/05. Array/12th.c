/*WAP that will take n integer numbers as input in an array and then insert a number in a
position specified by the user in the array.*/
#include<stdio.h>
int main()
{
    int n, num, pos;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    scanf("%d",&pos);

    for(int i=n; i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    for(int i=0; i<=n; i++){
        printf("%d ",arr[i]);
    }
}
