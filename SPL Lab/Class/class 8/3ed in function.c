//the function is inter multipol input but the function can't return muntipol value so how to print multipol value in function.
#include<stdio.h>
void p(int b[])
{
    int i;
    printf("Array: ");
    for(i=0; i<5; i++){
        printf("%d ",b[i]);
    }
}
int main()
{
    int n;
    printf("Enter size of memory for array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d number in array: ",n);
    for(int i=0; i<=4; i++){
        scanf("%d",&a[i]);
    }
    p(a);
    return 0;
}
s
