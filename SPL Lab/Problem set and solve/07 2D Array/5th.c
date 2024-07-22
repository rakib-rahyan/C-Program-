/*WAP that will take the size of an identity matrix from the user and generate the identity
matrix into a 2D array. Finally display it. Reference:http://en.wikipedia.org/wiki/Identity_matrix*/
#include<stdio.h>
int main()
{
    int n;
    printf("Input N for this array: ");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                a[i][j]=1;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    printf("\nThe result:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
