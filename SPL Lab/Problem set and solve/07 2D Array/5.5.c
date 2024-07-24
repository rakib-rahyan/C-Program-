#include<stdio.h>
int main()
{
    int value = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            value *= i + j;
        }
    }
    printf("Value: %d", value);
}
