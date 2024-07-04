//Array input by user;
// and this is declear by 1 line
//and this is input 1 line this work in loop
// and for show output use by 1 line print
#include<stdio.h>
int main()
{
    int arr[5], i;
    for(i=0; i<5; i++ ){
        scanf("%d",&arr[i]);
    }
    for(i=1; i<5; i++);printf("%d",arr[i]);
    printf("%d",arr[0]);
    return 0;
}

