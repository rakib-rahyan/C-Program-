//2D array
// this is a square shape array
// n is array number how many square
// and input all number last print
#include<stdio.h>
int main()
{
      int n;
      printf("This program for input your matrix number.");
      printf("Enter square matrix size: ");
      scanf("%d",&n);
      printf("Enter %d numbers input.",n*n);
      int a[n][n], i,j;
      printf("Enter matrix elements: ");
      for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                  scanf("%d",&a[i][j]);
            }
      }
      printf("Matrix a:\n");
      for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                  printf("%d ",a[i][j]);
            }
            printf("\n");
      }
      return 0;
}

