/*WAP that will first take n integers into an array A and then m integers into array B. Now
swap all elements between array A and B. Finally show all elements of both array A and B.*/
#include<stdio.h>
int main()
{
    int n, m, l;
    printf("Enter N for 1st array memory ");
    scanf("%d",&n);
    printf("Enter N for 2nd array memory ");
    scanf("%d",&m);
    if(m<n)l=n;
    else l=m;
    int a[l],b[l],c;
    printf("\nEnter 1st array element: ");
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    printf("\nEnter 2nd array element: ");
    for(int i=0; i<m; i++)scanf("%d",&b[i]);

    for(int i=0; i<l; i++){
        c=a[i];
        a[i]=b[i];
        b[i]=c;
    }
    printf("\nArray A: ");
    for(int i=0; i<m; i++)printf("%d ",a[i]);
    printf("\nArray B: ");
    for(int i=0; i<n; i++)printf("%d ",b[i]);
}
