/*WAP that will take inputs of m x n sized matrix into a 2D array and find the maximum
element with index location from that matrix.*/
#include<stdio.h>
int main()
{
    int n, m, max=0, in1,in2;
    printf("Enter N and M for A matrix Array size: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Input %d element for array index A: ",n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
            if(max<a[i][j]){
                max=a[i][j];
                in1=i;
                in2=j;
            }
        }
    }
    printf("Max: %d \nLocation: [%d][%d]",max, in1,in2);
}
