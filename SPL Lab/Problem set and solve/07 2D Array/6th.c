/*WAP that will take inputs of two m x n sized matrix into two 2D array, suppose A and B.
Now do C = A + B. Finally display all the elements from matrix / 2D array C.*/
#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter N and M for A, B Array size: ");
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m],c[n][m];
    printf("Input %d element for array index A: ",n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input %d element for array index B: ",n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&b[i][j]);
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nElement of array A: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nElement of array B: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\nElement of array C=A+B: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
