/*WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now reverse
that matrix within itself and display it. Reversal means swap 1st column with the nth
column, swap 2nd column with the (n-1)th column and so on…*/
#include<stdio.h>
int main()
{
    int n, m, c;
    printf("Enter N and M for A, B Array size: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Input %d element for array index A: ",n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m/2; j++){
            c=a[i][j];
            a[i][j]=a[i][m-1-j];
            a[i][m-1-j]=c;
        }
    }
    printf("Output the column element of reverse: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
