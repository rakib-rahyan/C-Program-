#include <stdio.h>
#define MatSize 10

int main()
{
    int m, n, choice;
    int A[MatSize][MatSize] = {0},B[MatSize][MatSize]= {0},C[MatSize][MatSize] = {0};

    printf("Number of rows for matrix but not larger then 10 (m): ");
    scanf("%d", &m);
    printf("Number of columns for matrix but not larger then 10 (n): ");
    scanf("%d", &n);

    if (m > MatSize || n > MatSize)
    {
        printf("Error: Matrix exceeds maximum size (%dx%d).\n", MatSize, MatSize);
        return 1;
    }

    printf("Enter elements of Matrix A (%dx%d)\n",m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B(%dx%d)\n",m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    do
    {
        printf("Menu:\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Subtraction\n");
        printf("3. Transpose of Matrix A\n");
        printf("4. Matrix Multiplication\n");
        printf("5. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        //Matrix Operations using Switch Case
        switch (choice)
        {
            // Matrix Addition: Add matrix A and matrix B.
        case 1:
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    C[i][j] = A[i][j] + B[i][j];
                }
            }
            printf("\nResult of Matrix Addition:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            break;
                // Matrix Subtraction: Subtract matrix B from matrix A.
        case 2:
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    C[i][j] = A[i][j] - B[i][j];
                }
            }
            printf("\nResult of Matrix Subtraction:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            break;
                //Matrix Transpose: Find the transpose of matrix A.
        case 3:
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    C[j][i] = A[i][j];
                }
            }
            printf("\nTranspose of Matrix A:\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            break;
                //Matrix Multiplication: Multiply matrix A and matrix B (ensure matrix multiplication
                //conditions are satisfied, otherwise display an error message)
        case 4:
            if (n != m)
            {
                printf("Error: Matrix multiplication is not possible. Inner dimensions must match.\n");
            }
            else
            {
                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < m; j++)   //C multiplication by m x m
                    {
                        C[i][j] = 0;
                        for (int k = 0; k < n; k++)
                        {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
                printf("\nResult of Matrix Multiplication:\n");
                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
            printf("\n");
            break;

        case 5:
            printf("Ended program.\n");
            break;

        default:
            printf("\nError: The option selected is invalid. Please choose a valid option from the available choices.\n");
        }
    }
    while (choice != 5);
    getch();
    return 0;
}
