#include<stdio.h>
int main()
{
    int arr[]={9,8,98,88,87,1,2,4,101,102,103,105};
    int *x = arr+4,z;
    int *ptr=&arr[7];
    z=arr[*ptr]++;

    printf("%d\n",z);
    printf("First value: %d\n", *ptr);
    printf("Second valu: %d\n", *x);

    *x = 7;

    printf("Third valu: %d\n", arr[4]);
    printf("Third valu: %d\n", *ptr);
    printf("Third valu: %d\n", arr[4]+*ptr);

    return 0;
}
