//Array input by user;
// and this is declear by 1 line
//and this is input 1 line this work in loop
// and for show output use by 1 line print
#include<stdio.h>
int main()
{
    int arr[5], i; //arr[5] is declare by 5 storage variable memory
    // for loop because arr store 5 variable memory, i can not scan write down 5 times
    for(i=0; i<6; i++)
    {
        scanf("%d",&arr[i]); // scan 5 time because loop run 0 to 4 times, arr[i] mine in loop i= then arr[0]
    }
    printf("\nok\n");
    for(i=0; i<6; i++){
        printf("print array store %d %d\n",i+1,arr[i]); // print 5 variable he can store in array funtion
    }
    return 0;
}
