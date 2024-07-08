#include<stdio.h>
int main()
{
    int hi=0, hlw=10;
    int arr[4]={10,20,30,40};
    for(int i=4; i<=hlw; i++){
        arr[hi]=arr[hi+1]-5;
        hlw-=2;

    }
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
}


